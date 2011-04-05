#ifndef _PROCESSED_RECORD_
#define _PROCESSED_RECORD_
#include <string>

struct ProcessedRecord{
	private : 
		string phoneNumnber;
		string callID;
		unsigned int cost;

	public :
		ProcessedRecord(string phoneNumber, string callID, unsigned int cost) :
			 phoneNumber(phoneNumber), callID(callID), cost(cost) {
		}
};

#endif // _PROCESSED_RECORD_
