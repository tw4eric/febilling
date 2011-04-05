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
	record.push_back(myRecord);
	return record;	
}
