#!/usr/bin/env bash
set -eu

# cd to the directory containing this script
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $DIR

export CMAKE_COMMAND="cmake"
if which cmake3 &> /dev/null; then
    export CMAKE_COMMAND="cmake3"
fi
export MAKE_COMMAND="make"
echo eval $CMAKE_COMMAND

# Use > 1 to consume two arguments per pass in the loop (e.g. each
# argument has a corresponding value to go with it).
# Use > 0 to consume one or more arguments per pass in the loop (e.g.
# some arguments don't have a corresponding value to go with it such
# as in the --default example).
# note: if this is set to > 0 the /etc/hosts part is not recognized ( may be a bug )
OS=
CHIP=
BUILD=
COMPUTE=
ARCH=
LIBTYPE=
PACKAGING=
CHIP_VERSION=
EXPERIMENTAL=
while [[ $# > 1 ]]
do
key="$1"
#Build type (release/debug), packaging type, chip: cpu,cuda, lib type (static/dynamic)
case $key in
    -o|-platform|--platform)
    OS="$2"
    shift # past argument
    ;;
    -b|--build-type)
    BUILD="$2"
    shift # past argument
    ;;
    -p|--packaging)
    PACKAGING="$2"
    shift # past argument
    ;;
    -c|--chip)
    CHIP="$2"
    shift # past argument
    ;;
    -cc|--compute)
    COMPUTE="$2"
    shift # past argument
    ;;
    -a|--arch)
    ARCH="$2"
    shift # past argument
    ;;
    -l|--libtype)
    LIBTYPE="$2"
    shift # past argument
    ;;
    -v|--chip-version)
    CHIP_VERSION="$2"
    shift # past argument
    ;;
    -x|--experimental)
    EXPERIMENTAL="$2"
    shift # past argument
    ;;
    --default)
    DEFAULT=YES
    ;;
    *)
            # unknown option
    ;;
esac
shift # past argument or value
done

HOST="generic"
KERNEL="linux-x86_64"
if [ "$(uname)" == "Darwin" ]; then
    HOST="macosx"
    KERNEL="darwin-x86_64"
    echo "RUNNING OSX CLANG"
elif [ "$(expr substr $(uname -s) 1 5)" == "MINGW" ] || [ "$(expr substr $(uname -s) 1 4)" == "MSYS" ]; then
    HOST="windows"
    KERNEL="windows-x86_64"
    echo "Running windows"
elif [ "$(uname -m)" == "ppc64le" ]; then
    if [ -z "$ARCH" ]; then
        ARCH="power8"
    fi
    KERNEL="linux-ppc64le"
fi

if [ -z "$OS" ]; then
    OS="$HOST"
fi

if [[ -z ${ANDROID_NDK:-} ]]; then
    ANDROID_NDK=~/Android/android-ndk/
fi

case "$OS" in
        linux-armhf)
        export CMAKE_COMMAND="cmake -D CMAKE_TOOLCHAIN_FILE=$HOME/raspberrypi/pi.cmake"
        if [ -z "$ARCH" ]; then
        ARCH="armv7-r"
    fi
        ;;
    android-arm)
    if [ -z "$ARCH" ]; then
        ARCH="armv7-a"
    fi
    export ANDROID_BIN="$ANDROID_NDK/toolchains/arm-linux-androideabi-4.9/prebuilt/$KERNEL/bin/arm-linux-androideabi"
    export ANDROID_CPP="$ANDROID_NDK/sources/cxx-stl/gnu-libstdc++/4.9/"
    export ANDROID_ROOT="$ANDROID_NDK/platforms/android-14/arch-arm/"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/android-arm.cmake"
    ;;

    android-x86)
    if [ -z "$ARCH" ]; then
        ARCH="i686"
    fi
    export ANDROID_BIN="$ANDROID_NDK/toolchains/x86-4.9/prebuilt/$KERNEL/bin/i686-linux-android"
    export ANDROID_CPP="$ANDROID_NDK/sources/cxx-stl/gnu-libstdc++/4.9/"
    export ANDROID_ROOT="$ANDROID_NDK/platforms/android-14/arch-x86/"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/android-x86.cmake"
    ;;

    ios-x86_64)
    LIBTYPE="static"
    ARCH="x86-64"
    if xcrun --sdk iphoneos --show-sdk-version &> /dev/null; then
    export IOS_VERSION="$(xcrun --sdk iphoneos --show-sdk-version)"
    else
        export IOS_VERSION="10.3"
    fi
    XCODE_PATH="$(xcode-select --print-path)"
    export IOS_SDK="$XCODE_PATH/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator$IOS_VERSION.sdk"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/ios-x86_64.cmake --debug-trycompile"
    ;;

    ios-x86)
    LIBTYPE="static"
    ARCH="i386"
    if xcrun --sdk iphoneos --show-sdk-version &> /dev/null; then
    export IOS_VERSION="$(xcrun --sdk iphoneos --show-sdk-version)"
    else
        export IOS_VERSION="10.3"
    fi
    XCODE_PATH="$(xcode-select --print-path)"
    export IOS_SDK="$XCODE_PATH/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator$IOS_VERSION.sdk"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/ios-x86.cmake --debug-trycompile"
    ;;

    ios-arm64)
    LIBTYPE="static"
    ARCH="arm64"
    if xcrun --sdk iphoneos --show-sdk-version &> /dev/null; then
    export IOS_VERSION="$(xcrun --sdk iphoneos --show-sdk-version)"
    else
        export IOS_VERSION="10.3"
    fi
    XCODE_PATH="$(xcode-select --print-path)"
    export IOS_SDK="$XCODE_PATH/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$IOS_VERSION.sdk"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/ios-arm64.cmake --debug-trycompile"
    ;;

    ios-arm)
    LIBTYPE="static"
    ARCH="armv7"
    if xcrun --sdk iphoneos --show-sdk-version &> /dev/null; then
    export IOS_VERSION="$(xcrun --sdk iphoneos --show-sdk-version)"
    else
        export IOS_VERSION="10.3"
    fi
    XCODE_PATH="$(xcode-select --print-path)"
    export IOS_SDK="$XCODE_PATH/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS$IOS_VERSION.sdk"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/ios-arm.cmake --debug-trycompile"
    ;;

    ios-armv7)
    # change those 2 parameters and make sure the IOS_SDK exists
    export iPhoneOS="iPhoneOS"
    export IOS_VERSION="10.3"
    LIBTYPE="static"
    ARCH="armv7"
    export IOS_SDK="/Applications/Xcode.app/Contents/Developer/Platforms/${iPhoneOS}.platform/Developer/SDKs/${iPhoneOS}${IOS_VERSION}.sdk"
    export CMAKE_COMMAND="cmake -DCMAKE_TOOLCHAIN_FILE=cmake/ios-armv7.cmake --debug-trycompile"
    ;;

    generic)
    ;;

    macosx*)
    # Do something under Mac OS X platform
    if [ "$CHIP" == "cuda" ]; then
        export CC=clang
        export CXX=clang++
    else
        export CC="$(ls -1 /usr/local/bin/gcc-? | head -n 1)"
        export CXX="$(ls -1 /usr/local/bin/g++-? | head -n 1)"
    fi
    ;;

    windows*)
    # Do something under Windows NT platform
    if [ "$CHIP" == "cuda" ]; then
        export CMAKE_COMMAND="cmake -G \"NMake Makefiles\""
        export MAKE_COMMAND="nmake"
    else
        export CMAKE_COMMAND="cmake -G \"MSYS Makefiles\""
        export MAKE_COMMAND="make"
    fi
    # Try some defaults for Visual Studio 2013 if user has not run vcvarsall.bat or something
    if [ -z "${VCINSTALLDIR:-}" ]; then
        export VisualStudioVersion=12.0
        export VSINSTALLDIR="C:\\Program Files (x86)\\Microsoft Visual Studio $VisualStudioVersion"
        export VCINSTALLDIR="$VSINSTALLDIR\\VC"
        export WindowsSdkDir="C:\\Program Files (x86)\\Windows Kits\\8.1"
        export Platform=X64
        export INCLUDE="$VCINSTALLDIR\\INCLUDE;$WindowsSdkDir\\include\\shared;$WindowsSdkDir\\include\\um"
        export LIB="$VCINSTALLDIR\\LIB\\amd64;$WindowsSdkDir\\lib\\winv6.3\\um\\x64"
        export LIBPATH="$VCINSTALLDIR\\LIB\\amd64;$WindowsSdkDir\\References\\CommonConfiguration\\Neutral"
        export PATH="$PATH:$VCINSTALLDIR\\BIN\\amd64:$WindowsSdkDir\\bin\\x64:$WindowsSdkDir\\bin\\x86"
    fi
    # Make sure we are using 64-bit MinGW-w64
    export PATH=/mingw64/bin/:$PATH
    CC=/mingw64/bin/gcc
    CXX=/mingw64/bin/g++
    # export GENERATOR="MSYS Makefiles"
    ;;
esac

if [ -z "$BUILD" ]; then
 BUILD="release"

fi

if [ -z "$CHIP" ]; then
 CHIP="cpu"
fi

if [ -z "$LIBTYPE" ]; then
 LIBTYPE="dynamic"
fi

if [ -z "$PACKAGING" ]; then
 PACKAGING="none"
fi

if [ -z "$COMPUTE" ]; then
 COMPUTE="all"
fi

if [ -z "$ARCH" ]; then
 ARCH="x86-64"
fi

if [ -z "$EXPERIMENTAL" ]; then
 EXPERIMENTAL="no"
fi

if [ "$CHIP" == "cpu" ]; then
  BLAS_ARG="-DCPU_BLAS=true -DBLAS=TRUE"
  else
       BLAS_ARG="-DCUDA_BLAS=true -DBLAS=TRUE"
fi

if [ "$LIBTYPE" == "dynamic" ]; then
     SHARED_LIBS_ARG="-DBUILD_SHARED_LIBS=OFF"
     else
         SHARED_LIBS_ARG="-DBUILD_SHARED_LIBS=ON"
fi

if [ "$BUILD" == "release" ]; then
        BUILD_TYPE="-DCMAKE_BUILD_TYPE=Release"
    else
        BUILD_TYPE="-DCMAKE_BUILD_TYPE=Debug"

fi

if [ "$PACKAGING" == "none" ]; then
    PACKAGING_ARG="-DPACKAGING=none"
fi

if [ "$PACKAGING" == "rpm" ]; then
    PACKAGING_ARG="-DPACKAGING=rpm"
fi

if [ "$PACKAGING" == "deb" ]; then
    PACKAGING_ARG="-DPACKAGING=deb"
fi

if [ "$PACKAGING" == "msi" ]; then
    PACKAGING_ARG="-DPACKAGING=msi"
fi

EXPERIMENTAL_ARG="no";

if [ "$EXPERIMENTAL" == "yes" ]; then
    EXPERIMENTAL_ARG="-DEXPERIMENTAL=yes"
fi

ARCH_ARG="-DARCH=$ARCH"

CUDA_COMPUTE="-DCOMPUTE=$COMPUTE"

if [ "$CHIP" == "cuda" ] && [ -n "$CHIP_VERSION" ]; then
    case $OS in
        generic)
        export CUDA_PATH="/usr/local/cuda-$CHIP_VERSION/"
        ;;
        macosx)
        export CUDA_PATH="/Developer/NVIDIA/CUDA-$CHIP_VERSION/"
        ;;
        windows)
        export CUDA_PATH="C:/Program Files/NVIDIA GPU Computing Toolkit/CUDA/v$CHIP_VERSION/"
        ;;
    esac
fi

OPENBLAS_PATH="$HOME/.javacpp/cache/openblas-0.2.19-1.3.4-SNAPSHOT-linux-x86_64.jar/org/bytedeco/javacpp/linux-x86_64/"

if [[ -n "${BUILD_PATH:-}" ]]; then
    PREVIFS="$IFS"
    IFS="$BUILD_PATH_SEPARATOR"
    for P in $BUILD_PATH; do
        if [[ -f "$P/include/openblas_config.h" ]]; then
            OPENBLAS_PATH="$P"
        fi
    done
    IFS="$PREVIFS"
fi

OPENBLAS_ARG="-DOPENBLAS_PATH=$OPENBLAS_PATH"

mkbuilddir() {
    mkdir -p blasbuild
    cd blasbuild
    # create appropriate directories and links here for ND4J
    if [ -n "$CHIP_VERSION" ]; then
        rm -rf "$CHIP-$CHIP_VERSION" "$CHIP"
        mkdir -p "$CHIP-$CHIP_VERSION"
        ln -s "$CHIP-$CHIP_VERSION" "$CHIP"
        mkdir -p "$CHIP/blas"
        cd "$CHIP-$CHIP_VERSION"
    else
        rm -rf "$CHIP"
        mkdir -p "$CHIP"
        cd "$CHIP"
    fi
}


echo PACKAGING  = "${PACKAGING}"
echo BUILD  = "${BUILD}"
echo CHIP     = "${CHIP}"
echo ARCH    = "${ARCH}"
echo CHIP_VERSION    = "${CHIP_VERSION}"
echo GPU_COMPUTE_CAPABILITY    = "${COMPUTE}"
echo EXPERIMENTAL = ${EXPERIMENTAL}
echo LIBRARY TYPE    = "${LIBTYPE}"
mkbuilddir
pwd
eval $CMAKE_COMMAND  "$BLAS_ARG" "$ARCH_ARG" "$SHARED_LIBS_ARG"  "$BUILD_TYPE" "$PACKAGING_ARG" "$EXPERIMENTAL_ARG" "$CUDA_COMPUTE" "$OPENBLAS_ARG" -DDEV=FALSE -DMKL_MULTI_THREADED=TRUE ../..
eval $MAKE_COMMAND && cd ../../..
