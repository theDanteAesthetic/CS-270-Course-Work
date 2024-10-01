#include "gtest/gtest.h"
#include "sum.cpp"

TEST(AddTest, HandlePositiveInput){
    EXPECT_EQ(add(4, 3),7);

}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
// g++ -o sum sum_test.cpp -l/usr/local/lib -lgtest -lpthread