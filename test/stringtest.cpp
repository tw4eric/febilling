#include <gtest/gtest.h>

#include "dummymain.h"

TEST(String, CaseSensitive) {
    EXPECT_STRNE("hello", "HELLO");
}

TEST(String, CaseInsensitive) {
    EXPECT_STRCASEEQ("hello", "HeLlO");
}
