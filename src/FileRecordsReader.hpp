#ifndef _FILE_RECORDS_READER_
#define _FILE_RECORDS_READER_
#include "RecordsReader.hpp"
#include <exception>
#include <fstream>
class FileRecordsReader : public RecordsReader
{
	public:
		FileRecordsReader( string fileName , int numOfCol ) throw( exception ) ;
		virtual vector<RawRecord> getRecords() {return vector<RawRecord>();}
		virtual bool getRecord() {return false;}
		virtual ~FileRecordsReader();
	private:
		ifstream myStream;
		int myCol;
	
};
#endif
