#ifndef _FILERECORDSWRITER_H_
#define _FILERECORDSWRITER_H_

//JOB : Write recordsCollection to a file

#include"RecordsWriter.hh"

#include<string>
#include<vector>

class FileRecordsWriter : public RecordsWriter
{
	public:
		FileRecordsWriter(std::string fileName) throw (std::string);
		bool WriteRecords(std::vector< std::vector< std::string > > recordCollection);

	private:
		std::string myFileToCreate;		
};

#endif // _FILERECORDSWRITER_H_
