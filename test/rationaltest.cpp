#include <gtest/gtest.h>
#include <rational.hpp>
#include <string>

using namespace std;

TEST(Rational, PrintToString) {
    Rational r(10, 20);
    string s = r;
    ASSERT_STREQ("10/20", s.c_str());
}

TEST(Rational, FloatValue) {
    Rational r(10, 20);
    ASSERT_NEAR(0.5, r, 0.001);
}

#include "dummymain.h"
