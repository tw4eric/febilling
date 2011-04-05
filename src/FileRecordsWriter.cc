
#include"FileRecordsWriter.hh"

#include<string>
#include<vector>
#include<iostream>
#include <fstream>

using namespace std;

FileRecordsWriter::FileRecordsWriter(string fileName) throw(string)
{
	myFileToCreate = fileName;
	ofstream myfile;	
	myfile.open (myFileToCreate.c_str(), ios::out);
	if(myfile.is_open())
	{
		myfile.close();
	}
	else
	{		
		throw string("Unable to open the file...");
	}
	
}

bool FileRecordsWriter::WriteRecords(vector< vector< string> > recordCollection)
{
	return false;
}
