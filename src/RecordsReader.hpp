//JOB: reads records
//
#ifndef _RECORD_READER_
#define _RECORD_READER_

#include <vector>
#include <string>
#include "RawRecord.h"
class RecordsReader {
	public:
		RecordsReader(){}
		virtual ~RecordsReader() {}
		virtual vector < vector<string > > getRecords() = 0;	
	protected:
		virtual  vector<string >  getRecord(const string & myRecord )=0;
}
;
#endif 

