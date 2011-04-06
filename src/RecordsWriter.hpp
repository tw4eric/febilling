#ifndef _RECORDSWRITER_HPP_
#define _RECORDSWRITER_HPP_

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

#endif // _RECORDSWRITER_HPP_
