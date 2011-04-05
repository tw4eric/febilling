#ifndef _FILERECORDSWRITER_H_
#define _FILERECORDSWRITER_H_

#include"RecordsWriter"

#include<string>
#include<vector>

class FileRecordsWriter : public RecordsWriter
{
	public:
		FileRecordsWriter(string fileName);
		bool WriteRecords(std::vector< std::vector< std::string > > recordCollection);

	private:
		string myFileToCreate;
};

#endif // _FILERECORDSWRITER_H_
