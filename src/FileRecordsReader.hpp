#ifndef _FILERECORDSREADER_HPP_
#define _FILERECORDSREADER_HPP_
#include "RecordsReader.hpp"
#include <exception>
#include <fstream>
class FileRecordsReader : public RecordsReader
{
	public:
		FileRecordsReader( string fileName , int numOfCol ) throw( exception ) ;
		virtual vector < vector<string> > getRecords() ;
		virtual vector< string > getRecord(const string& myRecord); 
		virtual ~FileRecordsReader();
	private:
		ifstream myStream;
		int myCol;
		void tokenize(const string& str,
                       vector<string>& tokens,
                       const string& delimiters );

	
};
#endif // _FILERECORDSREADER_HPP_
