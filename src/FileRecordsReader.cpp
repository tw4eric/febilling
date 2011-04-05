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
}
FileRecordsReader::~FileRecordsReader()
{
	if(myStream.is_open())
	{
		myStream.close();
	}

}

