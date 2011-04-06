#include <gtest/gtest.h>
#include <iostream>
#include <vector>

#include "RecordsConsolidator.hpp"
#include "RawRecord.hpp"

using namespace std;

TEST(Consolidator, constructorTest ) {
	vector<RawRecord> rawRecords;
	RawRecord *rr = new RawRecord("abcd","xyzu",345,3445);
	rawRecords.push_back(*rr);

	RecordsConsolidator *rc= new RecordsConsolidator(rawRecords);
}

int main (int argc, char* argv[]){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
