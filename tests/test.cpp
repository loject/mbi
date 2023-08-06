// test/test_source_files.cpp

#include <gtest/gtest.h>

unsigned int factorial(unsigned int n) {
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
}
// Тестируем функцию factorial

TEST(FactorialTest, Zero) {
    EXPECT_EQ(factorial(0), 1);
}

TEST(FactorialTest, PositiveNumber) {
    EXPECT_EQ(factorial(5), 120);
}

TEST(FactorialTest, LargeNumber) {
    EXPECT_EQ(factorial(10), 3628800);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
