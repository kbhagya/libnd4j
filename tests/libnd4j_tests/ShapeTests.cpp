//
// Created by agibsonccc on 1/6/17.
//
#include "testinclude.h"

class OnesTest : public testing::Test {
public:
    int shapeBuffer[12] = {4,4,3,1,1,3,1,1,1,0,1,99};
    int dimension[3] = {0,2,3};
    int tadAssertionShape[10] = {3,1,1,4,1,1,3,0,3,99};
    int dimensionLength = 3;
};

class LabelTest : public testing::Test {
public:
    float labels[450] = {1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0};
    int shapeInfo[8] = {2,150,3,1,150,0,1,102};
    int dimension[1] = {1};
    int dimensionLength = 1;
    int tadShapeInfoAssert[8] = {2,1,3,1,150,0,150,99};
};
class ThreeDTest : public testing::Test {
public:
    int shape[3] = {3,4,5};
    int *shapeBuffer;
    ThreeDTest() {
        shapeBuffer = shape::shapeBuffer(3,shape);
    }
    ~ThreeDTest() {
        delete[] shapeBuffer;
    }
};

class VectorTest : public testing::Test {

};

class NumTadTests : public testing::Test {
public:
    int shape[3] = {3,4,5};
    int dimension = 0;
};

class ShapeTest :  public testing::Test {
public:
    int vectorShape[2] = {1,2};
};

class MatrixTest : public testing::Test {
public:
    int rows = 3;
    int cols = 4;
    int rank = 2;
    int dims[2] = {0,1};
    int expectedShapes[2][2] = {
            {1,3},
            {1,4}
    };
    int expectedStrides[2][2] = {
            {1,4},
            {1,1}
    };
};

class TADStall : public testing::Test {
public:
    int shape[4] = {3,3,4,5};
    int dimensions[3]  = {1,2,3};
};

class TensorOneDimTest : public testing::Test {
public:
    int rows = 3;
    int cols = 4;
    int dim2 = 5;
    int rank = 3;
    int dims[3] = {0,1,2};
    int expectedShapes[3][2] = {
            {1,3},
            {1,4},
            {1,5}
    };
    int expectedStrides[3][2] = {
            {1,20},
            {1,5},
            {1,1}
    };
};

class TensorTwoDimTest : public testing::Test {
public:
    //From a 3d array:
    int rows = 3;
    int cols = 4;
    int dim2 = 5;
    int dimensionLength = 2;
    int dims[3][2] = {
            {0,1},{0,2},{1,2}
    };

    int shape[3] {rows,cols,dim2};

    //Along dimension 0,1: expect matrix with shape [rows,cols]
    //Along dimension 0,2: expect matrix with shape [rows,dim2]
    //Along dimension 1,2: expect matrix with shape [cols,dim2]
    int expectedShapes[3][2] = {
            {rows,cols},
            {rows,dim2},
            {cols,dim2}
    };

    int expectedStrides[3][2] = {
            {20,5},
            {20,1},
            {5,1}
    };

};

class TensorTwoFromFourDDimTest : public testing::Test {
public:
    //From a 3d array:
    int rows = 3;
    int cols = 4;
    int dim2 = 5;
    int dim3 = 6;
    int shape[4] = {rows,cols,dim2,dim3};
    int dimensionLength = 2;
    //Along dimension 0,1: expect matrix with shape [rows,cols]
    //Along dimension 0,2: expect matrix with shape [rows,dim2]
    //Along dimension 0,3: expect matrix with shape [rows,dim3]
    //Along dimension 1,2: expect matrix with shape [cols,dim2]
    //Along dimension 1,3: expect matrix with shape [cols,dim3]
    //Along dimension 2,3: expect matrix with shape [dim2,dim3]

    int dims[6][2] = {
            {0,1},
            {0,2},
            {0,3},
            {1,2},
            {1,3},
            {2,3}
    };

    int expectedShapes[6][2] = {
             {rows,cols},
             {rows,dim2},
             {rows,dim3},
             {cols,dim2},
             {cols,dim3}
            ,{dim2,dim3}
    };

    int expectedStrides[6][2] = {
            {120,30},
            {120,6},
            {120,1},
            {30,6},
            {30,1},
            {6,1}
    };
};


class OrderTest : public testing::Test {
public:
    int expected[8] = {2,3,4,1,3,0,-1,102};
    int test[8] = {2,3,4,1,3,0,-1,102};

};


class LeadingOnes : public testing::Test {
public:
    int shapeBufferF[16] = {4,1,1,4,4,1,1,1,4,0,1,102};
    int shapeBufferC[16] = {4,1,1,4,4,16,16,4,1,0,1,99};
    int dimensionLength = 2;
    int dimension[2] = {2,3};
    int tadAssertionC[10] = {3,4,4,1,4,1,16,0,-1,99};
    int tadCAssertionF[10] = {3,4,4,1,1,4,1,0,-1,99};
};


TEST_F(LeadingOnes,OnesTest) {
    shape::TAD *cTad = new shape::TAD(shapeBufferC,dimension,dimensionLength);
    cTad->createTadOnlyShapeInfo();
    cTad->createOffsets();
    shape::TAD *fTad = new shape::TAD(shapeBufferF,dimension,dimensionLength);
    fTad->createTadOnlyShapeInfo();
    fTad->createOffsets();
    ASSERT_TRUE(arrsEquals(10,tadCAssertionF,fTad->tadOnlyShapeInfo));
    ASSERT_TRUE(arrsEquals(10,tadAssertionC,cTad->tadOnlyShapeInfo));

    delete cTad;
    delete fTad;
}


class NormalThreeFourFive : public testing::Test {
public:
    int assertionBuffer[8] = {2,3,4,20,5,1,-1,99};
    int inputShapeBuffer[10] = {3,3,4,5,20,5,1,0,1,99};
    int dimensionLength = 2;
    int dimension[2] = {0,1};
};

TEST_F(NormalThreeFourFive,DimensionTest) {
    shape::TAD *tad = new shape::TAD(1,inputShapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad->createOffsets();
    ASSERT_TRUE(arrsEquals(8,assertionBuffer,tad->tadOnlyShapeInfo));
}


class DimensionWarning : public testing::Test {
public:
    int dimensionLength = 2;
    int dimensions[2] = {0,1};
    int shape[3] = {1,5,1};
    int *shapeBuffer = shape::shapeBuffer(3,shape);

    ~DimensionWarning() {
        delete[] shapeBuffer;
    }
};


TEST_F(DimensionWarning,ShapeWarning) {
    shape::TAD *tad = new shape::TAD(shapeBuffer,dimensions,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad->createOffsets();
    delete tad;
}


class TadRank : public testing::Test {
    int shapeBuffer[12] = {4,2,1,3,3,9,9,3,1,0,1,99};
    int dimensionLength = 2;
    int dimension[2] = {2,3};

};


class DimensionWarning : public testing::Test {
public:
    int dimensionLength = 2;
    int dimensions[2] = {0,1};
    int shape[3] = {1,5,1};
    int *shapeBuffer = shape::shapeBuffer(3,shape);

    ~DimensionWarning() {
        delete[] shapeBuffer;
    }
};


TEST_F(DimensionWarning,ShapeWarning) {
    shape::TAD *tad = new shape::TAD(shapeBuffer,dimensions,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad->createOffsets();
    delete tad;
}

class TestRemoveIndex : public testing::Test {};

class TestReverseCopy : public testing::Test {};

class TestConcat : public testing::Test {};

class SliceVectorTest : public testing::Test {};

class SliceMatrixTest : public testing::Test {};

class SliceTensorTest : public testing::Test {};

class ElementWiseStrideTest : public testing::Test {
public:
    int shape[3] = {3,4,5};
    int stride[2] = {20,5};
    int elementWiseStrideAssertion = -1;
};

class PermuteTest : public testing::Test{};

class LengthPerSliceTest : public testing::Test{};

class ExpectedValuesTest : public testing::Test {
public:
    int mainShape[4] = {9,7,5,3};
    int testDimensions[3] = {0,2,3};

};

class BeginOneTadTest : public testing::Test {
public:
    int assertionShapeBuffer[8] = {2,3,5,1,3,0,-1,102};
    int inputShapeBuffer[10] = {3,1,3,5,1,1,3,0,1,102};
    int dimensionLength = 2;
    int dimension[2] = {1,2};
    //error: [2,1,1,1,1,0,1,97]
};

class FourDTest : public testing::Test {
    /**
     * INDArray array3d = Nd4j.ones(1, 10, 10);
array3d.sum(1);

INDArray array4d = Nd4j.ones(1, 10, 10, 10);
INDArray sum40 = array4d.sum(0);
     */
public:
    int threeDShape[3] = {1,10,10};
    int fourDShape[4] = {1,10,10,10};
    int *threeDShapeBuffer = nullptr,*fourDShapeBuffer = nullptr;
    int dimensionThree = 1;
    int dimensionThreeTwo = 0;
    int dimensionFour = 0;
    int dimensionLength = 1;
    FourDTest() {
        threeDShapeBuffer = shape::shapeBufferFortran(3,threeDShape);
        fourDShapeBuffer = shape::shapeBufferFortran(4,fourDShape);
    }
    ~FourDTest() {
        if(threeDShapeBuffer != nullptr)
            delete[] threeDShapeBuffer;
        if(fourDShapeBuffer != nullptr)
            delete[] fourDShapeBuffer;
    }



};



TEST_F(FourDTest,ThreeDFourDTest) {
    shape::TAD *threeTadTwo = new shape::TAD(threeDShapeBuffer,&dimensionThreeTwo,dimensionLength);
    threeTadTwo->createTadOnlyShapeInfo();
    threeTadTwo->createOffsets();

    shape::TAD *threeTad = new shape::TAD(threeDShapeBuffer,&dimensionThree,dimensionLength);
    threeTad->createTadOnlyShapeInfo();
    threeTad->createOffsets();




    shape::TAD *fourTad = new shape::TAD(fourDShapeBuffer,&dimensionFour,dimensionLength);
    fourTad->createTadOnlyShapeInfo();
    fourTad->createOffsets();

}



class RowVectorOnesTest : public testing::Test {
public:
    int shapeBuffer[12] = {4,4,3,1,1,3,1,1,1,0,1,99};
    float data[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int assertionBuffer[10] = {3,4,1,1,3,1,1,0,-1,99};
    int dimensionLength = 3;
    int dimension[3] = {0,2,3};
};

TEST_F(RowVectorOnesTest,TadShape) {
    shape::TAD *tad = new shape::TAD(shapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad ->createOffsets();
    ASSERT_TRUE(arrsEquals(10,assertionBuffer,tad->tadOnlyShapeInfo));
    delete tad;
}



class SixDTest : public testing::Test {
public:
    int inputShapeBuffer[16] = {6,1,1,4,4,4,4,1,1,1,4,16,64,0,1,102};
    int dimensionLength = 2;
    int dimension[2] = {2,3};
    int assertionShapeBuffer[8] = {2,4,4,1,4,0,-1,102};
};

TEST_F(SixDTest,SixDWithOnes) {
    shape::TAD *tad = new shape::TAD(inputShapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad ->createOffsets();
    //[2,1,1,1,1,0,1,97]
    ASSERT_TRUE(arrsEquals(8,assertionShapeBuffer,tad->tadOnlyShapeInfo));
}

class TrailingTest : public testing::Test {
public:
    int inputShapeBuffer[12] = {4,5,5,5,1,1,5,25,125,0,1,102};
    int dimensionLength = 1;
    int dimension[1] = {0};
    int assertionShapeBuffer[8] = {2,1,5,125,1,0,1,99};
};

TEST_F(TrailingTest,TrailingTest2) {
    shape::TAD *tad = new shape::TAD(inputShapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad ->createOffsets();
    //[2,1,1,1,1,0,1,97]
    ASSERT_TRUE(arrsEquals(8,assertionShapeBuffer,tad->tadOnlyShapeInfo));
}


class ScalarTest : public testing::Test {
public:
    int inputShapeBuffer[12] = {3,2,1,4,4,4,1,0,1,99};
    int dimensionLength = 1;
    int dimension[1] = {1};
    int assertionShapeBuffer[8] = {2,1,1,1,1,0,1,97};
};

TEST_F(ScalarTest,ScalarTest2) {
    shape::TAD *tad = new shape::TAD(inputShapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad ->createOffsets();
    //[2,1,1,1,1,0,1,97]
    ASSERT_TRUE(arrsEquals(8,assertionShapeBuffer,tad->tadOnlyShapeInfo));
}



class ThreeTest : public testing::Test {
public:
    int inputShapeBuffer[10] = {3,4,3,2,6,2,1,0,1,99};
    int dimensionLength = 1;
    int dimension[1] = {0};
    int assertionShapeBuffer[8] = {2,1,4,1,6,0,6,99};
};

TEST_F(ThreeTest,ThreeTest ) {
    shape::TAD *tad = new shape::TAD(inputShapeBuffer,dimension,dimensionLength);
    tad->createTadOnlyShapeInfo();
    tad ->createOffsets();
    //[2,1,1,1,1,0,1,97]
    ASSERT_TRUE(arrsEquals(8,assertionShapeBuffer,tad->tadOnlyShapeInfo));
}


TEST_F(BeginOneTadTest,TadTest) {
    shape::TAD *tad = new shape::TAD(inputShapeBuffer,dimension,dimensionLength);
    int *tadShapeBuffer = tad->shapeInfoOnlyShapeAndStride();
    //[2,1,1,1,1,0,1,97]
    ASSERT_TRUE(arrsEquals(8,assertionShapeBuffer,tadShapeBuffer));
    delete[] tadShapeBuffer;
}


TEST_F(OnesTest,OnesTadTest) {
    shape::TAD *tad = new shape::TAD(shapeBuffer,dimension,dimensionLength);
    int *tadShapeBuffer = tad->shapeInfoOnlyShapeAndStride();
    ASSERT_TRUE(arrsEquals(10,tadAssertionShape,tadShapeBuffer));
    delete[] tadShapeBuffer;
}

TEST_F(LabelTest,LabelTad) {
    shape::TAD *tad = new shape::TAD(shapeInfo,dimension,dimensionLength);
    int *tadShapeInfo = tad->shapeInfoOnlyShapeAndStride();
    ASSERT_TRUE(arrsEquals(8,tadShapeInfoAssert,tadShapeInfo));
    delete[] tadShapeInfo;

}

TEST_F(ExpectedValuesTest,TadTest) {
    int *shapeBuffer = shape::shapeBuffer(4,mainShape);
    shape::TAD *tad = new shape::TAD(shapeBuffer,testDimensions,3);
    int *shapeInfo = tad->shapeInfoOnlyShapeAndStride();
    delete[] shapeInfo;
    delete tad;
    delete[] shapeBuffer;
}

TEST_F(OrderTest,testOrder) {
    int rank = shape::rank(expected);
    int *expectedShape = shape::shapeOf(expected);
    int *expectedStride = shape::stride(expected);
    int realOrder = shape::getOrder(rank,expectedShape,expectedStride,1);
    int expectedOrder = 102;
    ASSERT_EQ(expectedOrder,realOrder);
}


TEST_F(ThreeDTest,TensorAlongDimensionTest) {
    int dimension[2] = {0,2};
    int tadShapeAssertion[2] = {3,5};
    int strideAssertion[2] = {20,1};
    shape::TAD *tad = new shape::TAD(0,this->shapeBuffer,dimension,2);
    int *shapeBufferTest = tad->shapeInfoOnlyShapeAndStride();
    int *shapeTest = shape::shapeOf(shapeBufferTest);
    int *strideTest = shape::stride(shapeBufferTest);
    ASSERT_TRUE(arrsEquals(2,tadShapeAssertion,shapeTest));
    ASSERT_TRUE(arrsEquals(2,strideAssertion,strideTest));

}


TEST_F(NumTadTests,TadTest) {
    int *shape = shape::shapeBuffer(3,this->shape);
    shape::TAD *tad = new shape::TAD(shape,&dimension,1);
    int numTads = shape::tensorsAlongDimension(shape,&dimension,1);
    ASSERT_EQ(20,numTads);
    delete[] shape;
    delete tad;
}

TEST_F(TADStall,TestStall) {
    int *shapeInfo = shape::shapeBuffer(4,shape);
    shape::TAD *tad = new shape::TAD(0,shapeInfo,this->dimensions,3);
    int *test = tad->shapeInfoOnlyShapeAndStride();
    delete[] test;
    delete[] shapeInfo;
}


TEST_F(LengthPerSliceTest,TestLengthPerSlice) {
    int firstShape[2] = {5,3};
    int lengthPerSliceAssertionFirst = 3;
    int firstDimension = 0;
    int lengthPerSliceTest = shape::lengthPerSlice(2,firstShape,&firstDimension,1);
    ASSERT_EQ(lengthPerSliceAssertionFirst,lengthPerSliceTest);
}

TEST_F(PermuteTest,PermuteShapeBufferTest) {
    int permuteOrder[4] = {3,2,1,0};
    int normalOrder[4] = {0,1,2,3};
    int shapeToPermute[4] = {5,3,2,6};
    int permutedOrder[4] = {6,2,3,5};
    int *shapeBufferOriginal = shape::shapeBuffer(4,shapeToPermute);
    int *assertionShapeBuffer = shape::shapeBuffer(4,shapeToPermute);
    shape::permuteShapeBufferInPlace(shapeBufferOriginal,normalOrder,shapeBufferOriginal);
    EXPECT_TRUE(arrsEquals(4,assertionShapeBuffer,shapeBufferOriginal));

    int *backwardsAssertion = shape::shapeBuffer(4,permutedOrder);
    int *permuted = shape::permuteShapeBuffer(assertionShapeBuffer,permuteOrder);
    EXPECT_TRUE(arrsEquals(4,backwardsAssertion,permuted));


    delete[] permuted;
    delete[] backwardsAssertion;
    delete[] shapeBufferOriginal;
    delete[] assertionShapeBuffer;
}

TEST_F(ElementWiseStrideTest,ElementWiseStrideTest) {

}

TEST_F(SliceVectorTest,RowColumnVectorTest) {
    int rowVectorShape[2] = {1,5};
    int *rowVectorShapeInfo = shape::shapeBuffer(2,rowVectorShape);
    int colVectorShape[2] = {5,1};
    int *colVectorShapeInfo = shape::shapeBuffer(2,colVectorShape);
    int *sliceRow = shape::sliceOfShapeBuffer(0,rowVectorShapeInfo);
    EXPECT_TRUE(arrsEquals(2,rowVectorShapeInfo,sliceRow));
    int *scalarSliceInfo = shape::createScalarShapeInfo();
    int *scalarColumnAssertion = shape::createScalarShapeInfo();
    scalarColumnAssertion[shape::shapeInfoLength(2) - 3] = 1;
    int *scalarColumnTest = shape::sliceOfShapeBuffer(1,colVectorShapeInfo);
    EXPECT_TRUE(arrsEquals(2,scalarColumnAssertion,scalarColumnTest));

    delete[] scalarColumnTest;
    delete[] scalarColumnAssertion;
    delete[] scalarSliceInfo;
    delete[] sliceRow;
    delete[] rowVectorShapeInfo;
    delete[] colVectorShapeInfo;
}

TEST_F(SliceTensorTest,TestSlice) {
    int shape[3] = {3,3,2};
    int *shapeBuffer = shape::shapeBuffer(3,shape);
    int sliceShape[2] = {3,2};
    int *sliceShapeBuffer = shape::shapeBuffer(2,sliceShape);
    int *testSlice = shape::sliceOfShapeBuffer(0,shapeBuffer);
    EXPECT_TRUE(arrsEquals(2,sliceShapeBuffer,testSlice));
    delete[] testSlice;
    delete[] shapeBuffer;
    delete[] sliceShapeBuffer;

}

TEST_F(SliceMatrixTest,TestSlice) {
    int shape[2] = {3,2};
    int *shapeBuffer = shape::shapeBuffer(2,shape);
    int sliceShape[2] = {1,2};
    int *sliceShapeBuffer = shape::shapeBuffer(2,sliceShape);
    int *testSlice = shape::sliceOfShapeBuffer(0,shapeBuffer);
    EXPECT_TRUE(arrsEquals(2,sliceShapeBuffer,testSlice));
    delete[] testSlice;
    delete[] shapeBuffer;
    delete[] sliceShapeBuffer;

}


TEST_F(TestConcat,ConcatTest) {
    int firstArr[2] = {1,2};
    int secondConcat[2] = {3,4};
    int concatAssertion[4] = {1,2,3,4};
    int *concatTest = shape::concat(firstArr,2,secondConcat,2);
    EXPECT_TRUE(arrsEquals(4,concatAssertion,concatTest));
    delete[] concatTest;
}

TEST_F(TestReverseCopy,ReverseCopyTest) {
    int toCopy[5] = {0,1,2,3,4};
    int reverseAssertion[5] = {4,3,2,1,0};
    int *reverseCopyTest = shape::reverseCopy(toCopy,5);
    EXPECT_TRUE(arrsEquals(5,reverseAssertion,reverseCopyTest));
    delete[] reverseCopyTest;
}

TEST_F(TestRemoveIndex,Remove) {
    int input[5] = {0,1,2,3,4};
    int indexesToRemove[3] = {0,1,2};
    int indexesToRemoveAssertion[2] = {3,4};
    int *indexesToRemoveTest = shape::removeIndex(input,indexesToRemove,5,3);
    EXPECT_TRUE(arrsEquals(2,indexesToRemoveAssertion,indexesToRemoveTest));
    delete[] indexesToRemoveTest;
}

TEST_F(TensorTwoFromFourDDimTest,TadTwoFromFourDimTest) {
    //Along dimension 0,1: expect matrix with shape [rows,cols]
    //Along dimension 0,2: expect matrix with shape [rows,dim2]
    //Along dimension 0,3: expect matrix with shape [rows,dim3]
    //Along dimension 1,2: expect matrix with shape [cols,dim2]
    //Along dimension 1,3: expect matrix with shape [cols,dim3]
    //Along dimension 2,3: expect matrix with shape [dim2,dim3]
    int *baseShapeBuffer = shape::shapeBuffer(4,shape);
    for(int i = 0; i <  3; i++) {
        int *dimArr = dims[i];
        int *expectedShape = expectedShapes[i];
        shape::TAD *tad = new shape::TAD(baseShapeBuffer,dimArr,dimensionLength);
        int *expectedShapeBuffer = shape::shapeBuffer(dimensionLength,expectedShape);
        int *testShapeBuffer = tad->shapeInfoOnlyShapeAndStride();
        EXPECT_TRUE(arrsEquals(shape::rank(expectedShapeBuffer),expectedShape,shape::shapeOf(testShapeBuffer)));
        EXPECT_TRUE(arrsEquals(shape::rank(expectedShapeBuffer),expectedStrides[i],shape::stride(testShapeBuffer)));

        delete[] testShapeBuffer;
        delete[] expectedShapeBuffer;
        delete tad;
    }

    delete[] baseShapeBuffer;
}

TEST_F(TensorTwoDimTest,TadTwoDimTest) {
    //Along dimension 0,1: expect matrix with shape [rows,cols]
    //Along dimension 0,2: expect matrix with shape [rows,dim2]
    //Along dimension 1,2: expect matrix with shape [cols,dim2]
    int *baseShapeBuffer = shape::shapeBuffer(3,shape);

    for(int i = 0; i <  3; i++) {
        int *dimArr = dims[i];
        int *expectedShape = expectedShapes[i];
        shape::TAD *tad = new shape::TAD(baseShapeBuffer,dimArr,dimensionLength);
        int *expectedShapeBuffer = shape::shapeBuffer(dimensionLength,expectedShape);
        int *testShapeBuffer = tad->shapeInfoOnlyShapeAndStride();
        int *expectedStride = expectedStrides[i];
        int *testShape = shape::shapeOf(testShapeBuffer);
        int *testStride = shape::stride(testShapeBuffer);
        EXPECT_TRUE(arrsEquals(shape::rank(expectedShapeBuffer),expectedShape,testShape));
        EXPECT_TRUE(arrsEquals(shape::rank(testShapeBuffer),expectedStride,testStride));
        delete[] testShapeBuffer;
        delete[] expectedShapeBuffer;
        delete tad;

    }

    delete[] baseShapeBuffer;


}

TEST_F(TensorOneDimTest,TadDimensionsForTensor) {
    int shape[3] = {rows,cols,dim2};
    int *shapeBuffer = shape::shapeBuffer(rank,shape);

    for(int i = 0; i < rank; i++) {
        //Along dimension 0: expect row vector with length 'dims[i]'
        shape::TAD *zero = new shape::TAD(shapeBuffer,&dims[i],1);
        int *testDimZeroShapeBuffer = zero->shapeInfoOnlyShapeAndStride();
        int *testShape = shape::shapeOf(testDimZeroShapeBuffer);
        int *testStride = shape::stride(testDimZeroShapeBuffer);
        EXPECT_TRUE(arrsEquals(2,expectedShapes[i],testShape));
        EXPECT_TRUE(arrsEquals(2,expectedStrides[i],testStride));
        delete[] testDimZeroShapeBuffer;

    }

    delete[] shapeBuffer;
}


TEST_F(MatrixTest,TadDimensionsForMatrix) {
    int shape[2] = {rows,cols};
    int *shapeBuffer = shape::shapeBuffer(rank,shape);
    shape::TAD *dimZero = new shape::TAD(shapeBuffer,&dims[0],1);
    shape::TAD *dimOne = new shape::TAD(shapeBuffer,&dims[1],1);
    //Along dimension 0: expect row vector with length 'rows'
    int rowVectorShape[2] = {1,rows};
    int *expectedDimZeroShape = shape::shapeBuffer(2,rowVectorShape);
    int *testDimZero = dimZero->shapeInfoOnlyShapeAndStride();
    EXPECT_TRUE(arrsEquals(2,expectedShapes[0],shape::shapeOf(testDimZero)));
    EXPECT_TRUE(arrsEquals(2,expectedStrides[0],shape::stride(testDimZero)));
    delete[] testDimZero;
    delete[] expectedDimZeroShape;
    //Along dimension 1: expect row vector with length 'cols'
    int rowVectorColShape[2] {1,cols};
    int *expectedDimOneShape = shape::shapeBuffer(2,rowVectorColShape);
    int *testDimOneShape = dimOne->shapeInfoOnlyShapeAndStride();
    EXPECT_TRUE(arrsEquals(2,expectedShapes[1],shape::shapeOf(testDimOneShape)));
    EXPECT_TRUE(arrsEquals(2,expectedStrides[1],shape::stride(testDimOneShape)));
    delete[] testDimOneShape;
    delete[] expectedDimOneShape;
    delete dimOne;
    delete dimZero;
    delete[] shapeBuffer;
}

TEST_F(VectorTest,VectorTadShape) {
    int rowVector[2] = {2,2};
    int *rowBuffer = shape::shapeBuffer(2,rowVector);
    int rowDimension = 1;

    int columnVector[2] = {2,2};
    int *colShapeBuffer = shape::shapeBuffer(2,columnVector);
    int colDimension = 0;


    shape::TAD *rowTad = new shape::TAD(rowBuffer,&rowDimension,1);
    int *rowTadShapeBuffer = rowTad->shapeInfoOnlyShapeAndStride();
    int *rowTadShape = shape::shapeOf(rowTadShapeBuffer);
    shape::TAD *colTad = new shape::TAD(colShapeBuffer,&colDimension,1);
    int *colTadShapeBuffer = colTad->shapeInfoOnlyShapeAndStride();
    int *colTadShape = shape::shapeOf(colTadShapeBuffer);
    int assertionShape[2] = {1,2};
    int assertionStride[2] = {1,1};
    EXPECT_TRUE(arrsEquals(2,assertionShape,rowTadShape));
    EXPECT_TRUE(arrsEquals(2,assertionStride,shape::stride(rowTadShapeBuffer)));
    EXPECT_TRUE(arrsEquals(2,assertionShape,colTadShape));

    delete[] rowBuffer;
    delete[] colShapeBuffer;
    delete rowTad;
    delete colTad;
}




TEST_F(ShapeTest,IsVector) {
    ASSERT_TRUE(shape::isVector(vectorShape,2));
}

TEST_F(VectorTest,LinspaceCombinationTest) {
    int rows = 3;
    int cols = 4;
    int len = rows * cols;
    double *linspaced = linspace<double>(1,rows * cols,len);
    int shape[2] = {rows,cols};
    int *shapeBuffer = shape::shapeBuffer(2,shape);


    delete[] shapeBuffer;
    delete[] linspaced;
}