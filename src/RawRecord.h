#ifndef _RAW_RECORD__
#define _RAW_RECORD_
#include <string>
using namespace std;
typedef struct RawRecord
{
    string phoneNum;
    string callID;
    string startTime;
    string endTime;
} RawRecord;
#endif 
