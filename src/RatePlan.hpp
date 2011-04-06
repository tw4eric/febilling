#ifndef _RATEPLAN_HPP_
#define _RATEPLAN_HPP_
#include <iostream>

class RatePlan
{
    private: 
        float aRatePerSecond;
        RatePlan() {}

    public :
        RatePlan(float ratePerSecond)
        {
            aRatePerSecond = ratePerSecond;
        }

        virtual float getPrice()
        {
            return aRatePerSecond;
        }

};
#endif // _RATEPLAN_HPP_
