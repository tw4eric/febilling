#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <RatePlanLookup.hpp>
#include "FileReaderMock.hpp"

using ::testing::Return;
using ::testing::Expectation;
using ::testing::Exactly;
using ::testing::InSequence;


TEST(RatePlanLookup, ReadsDataFromFile) {
    FileReaderMock fileReader("dummydata.txt");
    InSequence s;
    for (int i = 0; i < 10; i++) {
        EXPECT_CALL(fileReader, isGood())
            .WillOnce(Return(true)).RetiresOnSaturation();
        EXPECT_CALL(fileReader, getLine())
            .WillOnce(Return(std::string("some line"))).RetiresOnSaturation();
    }
    EXPECT_CALL(fileReader, isGood())
        .Times(1).WillOnce(Return(false));

    RatePlanLookup ratePlanLookup(&fileReader);
}

#include "dummymain.h"
