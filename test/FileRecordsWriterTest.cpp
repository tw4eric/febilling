#include <gtest/gtest.h>
#include <FileRecordsWriter.hh>
#include <RecordsWriter.hh>

#include<string>
#include<vector>
using namespace std;

TEST(FileRecordsWriter, fileProvidedIsNotValid) {
	
	ASSERT_THROW({RecordsWriter* recordWriter = new FileRecordsWriter(string("/home/test123/test.txt"));},string);	    
};

TEST(FileRecordsWriter, fileProvidedIsValid) {
	
	ASSERT_NO_THROW({RecordsWriter* recordWriter = new FileRecordsWriter(string("MakeFile"));});	    
};


#include "dummymain.h"

