
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
	myfile.open (myFileToCreate.c_str(), ios::out | ios::app);
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
	ofstream myfile;	
	myfile.open (myFileToCreate.c_str(), ios::out);
	string str;	
	if(myfile.is_open())
	{
		
		//cout<<"File is opened"<<endl;
		for(int ii = 0; ii < recordCollection.size(); ii++)
		{
			str.clear();
			for(int jj = 0; jj < recordCollection.size(); jj++)
			{
				str += recordCollection[ii][jj];
				str +=",";
			}
			
			str.resize(str.length() - 1);
			myfile << str;
			myfile << endl;
		}

	myfile.close();
	return true;
	}
	else
	{	
		return false;
	}	
}
