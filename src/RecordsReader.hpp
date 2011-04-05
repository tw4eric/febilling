//JOB: reads records
//
#include <vector>
#include "RawRecord.h"
#ifndef _RECORD_READER_
#define _RECORD_READER_

class RecordReader {
	public:
		RecordReader();
		virtual vector<RawRecord> getRecords() = 0;	
	protected:
		virtual ~RecordReader();
		virtual getRecord()=0;
		virtual storeRecord( RawRecord aRecord ) = 0;
		vector<RawRecord>  collectionOfRecords;
		

};
#endif 

