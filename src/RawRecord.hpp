#ifndef _RAWRECORD_HPP_
#define _RAWRECORD_HPP_

#include <string>

using namespace std;

typedef struct RawRecord
{

        private :
                string phoneNum;
                string callID;
                unsigned int startTime;
                unsigned int endTime;

        public :
                RawRecord(string phoneNum, string callID, unsigned int startTime, unsigned int endTime) :
                        phoneNum(phoneNum), callID(callID), startTime(startTime), endTime(endTime) {
                }
} RawRecord;

#endif // _RAWRECORD_HPP_
