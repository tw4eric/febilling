#include <RatePlanLookup.h>

float  RatePlanLookup::LookupRatePlan(long aPhoneNumber ,string aCallId)
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

