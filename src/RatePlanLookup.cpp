#include <RatePlanLookup.hpp>
#include <iostream>
using namespace std;

RatePlanLookup::RatePlanLookup(FileReader *fileReader)
{
    while (fileReader->isGood()) {
        fileReader->getLine();
    }
}

float RatePlanLookup::LookupRatePlan(long aPhoneNumber ,string aCallId)
{
	RatePlan theRatePlan = getRatePlan(aPhoneNumber,aCallId);
	return theRatePlan.getPrice(); 
}

RatePlan RatePlanLookup::getRatePlan(long aPhoneNumber , string aCallId)
{
	RateMap::iterator x;
	if ((x = aRateMap.find(aCallId)) != aRateMap.end())
	{
			return RatePlan(x->second);
	}
	
	return RatePlan(7.0);
}

