#include <gtest/gtest.h>

TEST(NumberEquality, Integers) {
    EXPECT_EQ(1, 1);
}

TEST(NumberEquality, Double) {
    EXPECT_EQ((double) 1.01, (double) 1.01);
    ASSERT_NEAR(1.0001, 1.0002, 0.0001) << "This is not expected to match anyways!";
    EXPECT_EQ((double) 1.01, (double) 1.01);
}

#include "dummymain.h"
