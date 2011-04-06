#ifndef _PROCESSEDRECORD_HPP_
#define _PROCESSEDRECORD_HPP_
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

#endif // _PROCESSEDRECORD_HPP_
