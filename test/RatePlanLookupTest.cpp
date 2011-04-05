#include <iostream>
#include <gtest/gtest.h>
#include <../src/RatePlanLookup.h>


TEST(RateplanTest,LookupReturnsFloat)
{
	RatePlanLookup aRatePlanLookup ;
	ASSERT_EQ(10.0,aRatePlanLookup.LookupRatePlan(9999999999l,"Local"));

};


#include "dummymain.h"
