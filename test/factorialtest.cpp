#include <gtest/gtest.h>
#include <factorial.hpp>

TEST(Factorial, shouldHandleZeroAndNegatives) {
    Factorial factorial;
    ASSERT_EQ(1, factorial(0));
    ASSERT_EQ(1, factorial(-10));
};

TEST(Factorial, shouldComputeRightValues) {
    Factorial factorial;
    ASSERT_EQ(120, factorial(5));
}

#include "dummymain.h"
