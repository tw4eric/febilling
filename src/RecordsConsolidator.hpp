#ifndef _RECORDS_CONSOLIDATOR_CC_
#define _RECORDS_CONSOLIDATOR_CC_

#include <string>
#include <vector>

#include "RawRecord.hpp"

using namespace std;

class RecordsConsolidator {
	private :
		vector<RawRecord> theRawRecords;
	public : 
		RecordsConsolidator(vector<RawRecord> rawRecords) : theRawRecords(rawRecords) {
		}
};
#endif // _RECORDS_CONSOLIDATOR_CC_
