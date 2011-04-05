#ifndef _RATEPLAN_H_
#define _RATEPLAN_H_
#include <iostream>

class RatePlan
{
    private: 
        float myRatePersec;

    public :
        RatePlan()
        {
            myRatePersec = 10.0;
        }

        RatePlan(float aPrice)
        {
            myRatePersec = aPrice;
        }

        float getPrice()
        {
            return myRatePersec;
        }

};
#endif // _RATEPLAN_H_
