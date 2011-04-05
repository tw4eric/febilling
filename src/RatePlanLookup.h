#include <iostream>
#include <RatePlan.h>
#include <string>
#include <tr1/unordered_map>

using namespace std;

class RatePlanLookup {

    private:
	 typedef tr1::unordered_map<std::string, float> RateMap;
	 RateMap aRateMap;


    public:
		RatePlanLookup()
		{
			aRateMap.insert(make_pair<string, float>("Local",10.0));
		}

		RatePlanLookup(string aFilePath)
		{
			aRateMap.insert(make_pair<string, float>("Local",10.0));
		}

		
        float LookupRatePlan(long aPhoneNumber , string aCallId);
		RatePlan getRatePlan(long aPhoneNumber , string aCallId);
};

