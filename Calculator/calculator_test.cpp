#include "gtest/gtest.h"
#include "calculator.h" 

TEST(AddTest, HandlesPositiveInput){
    EXPECT_EQ(addition(5,7), 12);
}

TEST(AddTest, HandlesNegativeInput){
    EXPECT_EQ(addition(-5,-7), -12);
}

TEST(SubtractTest, HandlesPositiveInput){
    EXPECT_EQ(subtraction(7,2), 5);
}

TEST(SubtractTest, HandlesNegativeInput){
    EXPECT_EQ(subtraction(-7,-2), -5);
}

TEST(MultiplyTest, HandlesPositiveInput){
    EXPECT_EQ(multiply(7,2), 14);
}

TEST(MultiplyTest, HandlesNegativeInput){
    EXPECT_EQ(multiply(-7,-2), 14);
}

TEST(DivideTest, HandlesPositiveInput){
    EXPECT_EQ(divide(12,2), 6);
}

TEST(DivideTest, BoundaryInput){
    EXPECT_EQ(divide(0,0), -1);
    EXPECT_EQ(divide(1,0), -1);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}