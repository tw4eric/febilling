#ifndef _RATEPLANLOOKUP_HPP_
#define _RATEPLANLOOKUP_HPP_
#include <iostream>
#include <RatePlan.hpp>
#include <FileReader.hpp>
#include <string>
#include <tr1/unordered_map>

using namespace std;

class RatePlanLookup {

    private:
        typedef tr1::unordered_map<std::string, float> RateMap;
        RateMap aRateMap;

    private:
        RatePlanLookup() {}
    public:
        RatePlanLookup(FileReader *fileReader);

        float LookupRatePlan(long aPhoneNumber , string aCallId);
        RatePlan getRatePlan(long aPhoneNumber , string aCallId);
};
#endif // _RATEPLANLOOKUP_HPP_
