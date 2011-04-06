#include <gtest/gtest.h>
#include <FileRecordsWriter.hh>
#include <RecordsWriter.hh>

#include<string>
#include<vector>
using namespace std;

TEST(FileRecordsWriter, fileProvidedIsNotValid) {
	
	EXPECT_THROW({FileRecordsWriter recordWriter = FileRecordsWriter(string("/home/test123/test.txt"));},string);	
	//delete recordWriter;
};

TEST(FileRecordsWriter, fileProvidedIsValid) {
	
	EXPECT_NO_THROW({FileRecordsWriter recordWriter = FileRecordsWriter(string("Makefile"));});	 
	//delete recordWriter;
};

TEST(FileRecordsWriter, dataWrittenToFile4line) {
	
	FileRecordsWriter recordWriter = FileRecordsWriter(string("../testData/test.txt"));
	vector<string> str1;
	str1.push_back("callId1");
	str1.push_back("phone");
	str1.push_back("time");
	str1.push_back("duration");
	vector<string> str2;
	str2.push_back("callId2");
	str2.push_back("phone");
	str2.push_back("time");
	str2.push_back("duration");
	vector<string> str3;
	str3.push_back("callId3");
	str3.push_back("phone");
	str3.push_back("time");
	str3.push_back("duration");
	vector<string> str4;
	str4.push_back("callId4");
	str4.push_back("phone");
	str4.push_back("time");
	str4.push_back("duration");
	vector< vector<string> > strList;
	strList.push_back(str1);
	strList.push_back(str2);
	strList.push_back(str3);
	strList.push_back(str4);

	 EXPECT_EQ(true, recordWriter.WriteRecords(strList));	 
};

TEST(FileRecordsWriter, dataNotWrittenToFile4lineTryCatch) {
	
	try
	{
		FileRecordsWriter recordWriter = FileRecordsWriter(string("home/test123.txt"));
	vector<string> str1;
	str1.push_back("callId1");
	str1.push_back("phone");
	str1.push_back("time");
	str1.push_back("duration");
	vector<string> str2;
	str2.push_back("callId2");
	str2.push_back("phone");
	str2.push_back("time");
	str2.push_back("duration");
	vector<string> str3;
	str3.push_back("callId3");
	str3.push_back("phone");
	str3.push_back("time");
	str3.push_back("duration");
	vector<string> str4;
	str4.push_back("callId4");
	str4.push_back("phone");
	str4.push_back("time");
	str4.push_back("duration");
	vector< vector<string> > strList;
	strList.push_back(str1);
	strList.push_back(str2);
	strList.push_back(str3);
	strList.push_back(str4);

	EXPECT_EQ(false, recordWriter.WriteRecords(strList));
	}
	catch (string s)
	{
		
	}
		 
};


#include "dummymain.h"

