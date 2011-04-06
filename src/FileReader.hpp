#ifndef _FILEREADER_HPP_
#define _FILEREADER_HPP_

class FileReader {
    private:
        FileReader() {}

    public:
        FileReader(std::string filepath) {}
        virtual ~FileReader() {}

    public:
        virtual std::string getLine() = 0;
        virtual bool isGood() = 0;
};

#endif // _FILEREADER_HPP_
