#ifndef _FILE_RECORDS_READER_
#define _FILE_RECORDS_READER_
#include "RecordsReader.hpp"
#include <exception>
#include <fstream>
class FileRecordsReader : public RecordsReader
{
	public:
		FileRecordsReader( string fileName , int numOfCol ) throw( exception ) ;
		virtual vector < vector<string> > getRecords() ;
		virtual vector< string > getRecord( const string& myRecord); 
		virtual ~FileRecordsReader();
	private:
		ifstream myStream;
		int myCol;
	
};
#endif
