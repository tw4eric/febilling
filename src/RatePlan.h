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
