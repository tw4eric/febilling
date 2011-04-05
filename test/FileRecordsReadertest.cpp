#include <gtest/gtest.h>
#include "../src/FileRecordsReader.hpp"
TEST( FileReaderConstructor , whileConstructingFileNotFound ) {

    ASSERT_THROW(FileRecordsReader("sample.txt",5), exception);
}
TEST( FileReaderConstructor , whileConstructingNegativeNumber ) {

    ASSERT_THROW(FileRecordsReader("sample1.txt",-5), exception);
}

TEST( FileReaderConstructor , isGetRecordsWorking ){
	
	FileRecordsReader myFileReader("sample1.txt",3);
/*
	vector<string> sampleVector;
	sampleVector.push_back(string("teja"));
	sampleVector.push_back(string("teja1"));
	sampleVector.push_back(string("teja2"));
*/	
	vector< vector <string > > recVector = myFileReader.getRecords();
          
	ASSERT_STREQ((recVector[0])[0].c_str() , string("teja").c_str());

	
	
}



#include "dummymain.h"


