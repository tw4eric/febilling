#ifndef _RECORDSWRITER_H_
#define _RECORDSWRITER_H_

#include<string>
#include<vector>


typedef std::vector< std::string > Record;

class RecordsWriter
{
	public:
		RecordsWriter();
		virtual ~RecordsWriter();
		virtual bool WriteRecords(std::vector< Record > recordCollection) = 0;
		
};

#endif // _RECORDSWRITER_H_
