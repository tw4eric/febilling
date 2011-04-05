#include <gtest/gtest.h>
#include <factorial.h>

TEST(Factorial, NegativeOrZeroTest) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(-12), 1);
}

TEST(Factorial, TestForFourFactorial) {
    EXPECT_EQ(factorial(4), 24);
}

int main(int argc, char *argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
