//JOB: reads records
//
#ifndef _RECORD_READER_
#define _RECORD_READER_

#include <vector>
#include "RawRecord.h"
class RecordsReader {
	public:
		RecordsReader(){}
		virtual ~RecordsReader() {}
		virtual vector<string> getRecords() = 0;	
	protected:
		virtual  bool getRecord()=0;
}
;
#endif 

