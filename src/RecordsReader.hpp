//JOB: reads records
//
#ifndef _RECORDSREADER_HPP_
#define _RECORDSREADER_HPP_

#include <vector>
#include <string>
#include "RawRecord.hpp"

class RecordsReader {
	public:
		RecordsReader(){}
		virtual ~RecordsReader() {}
		virtual vector < vector<string > > getRecords() = 0;	
	protected:
		virtual  vector<string >  getRecord(const string & myRecord )=0;
};

#endif // _RECORDSREADER_HPP_
