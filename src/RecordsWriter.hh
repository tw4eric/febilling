#ifndef _RECORDSWRITER_H_
#define _RECORDSWRITER_H_

//JOB : Write recordsCollection to a interface

#include<string>
#include<vector>


class RecordsWriter
{
	public:
		RecordsWriter(){};
		virtual ~RecordsWriter(){};
		virtual bool WriteRecords(std::vector< std::vector<std::string> > recordCollection) = 0;		
};

#endif // _RECORDSWRITER_H_
