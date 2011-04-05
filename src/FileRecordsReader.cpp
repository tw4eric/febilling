#include "FileRecordsReader.hpp"
#include <iostream>
#include <fstream>
using namespace std;
FileRecordsReader::FileRecordsReader( string fileName , int noOfCol ) throw ( exception )
{
    myCol = noOfCol;
    myStream.open(fileName.c_str() , ios::in) ;
    if(!myStream.good())
	{
		throw exception();
	}
	if(noOfCol < 0)
	{
		throw exception();
	}
}	
FileRecordsReader::~FileRecordsReader()
{
	if(myStream.is_open())
	{
		myStream.close();
	}

}
vector<vector <string> > FileRecordsReader::getRecords()
{
vector<	vector <string > > myRecords;

	 if (myStream) {
                std::string s;
                while (getline(myStream, s))
			{
                      myRecords.push_back(getRecord(s));
}
        }

	return myRecords;	
}
vector< string> FileRecordsReader::getRecord(const  string& myRecord)
{
	vector <string > record;
	string delim (",");
	tokenize(myRecord, record ,delim );
	return record;	
}
void FileRecordsReader::tokenize(const string& str,
                      vector<string>& tokens,
                      const string& delimiters = ",")
{
    // Skip delimiters at beginning.
        string::size_type lastPos = str.find_first_not_of(delimiters, 0);
            // Find first "non-delimiter".
                string::size_type pos     = str.find_first_of(delimiters, lastPos);
   
                   while (string::npos != pos || string::npos != lastPos)
                       {
                               // Found a token, add it to the vector.
                                       tokens.push_back(str.substr(lastPos, pos - lastPos));
                                               // Skip delimiters.  Note the "not_of"
                                                       lastPos = str.find_first_not_of(delimiters, pos);
                                                           // Find next "non-delimiter"
                                                                      pos = str.find_first_of(delimiters, lastPos);
                   }
 }


