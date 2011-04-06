#include <FileReader.hpp>

class FileReaderMock : public FileReader {
    public:
        FileReaderMock(std::string filepath):FileReader(filepath) {}
        ~FileReaderMock() {}

    public:
        MOCK_METHOD0(getLine, std::string());
        MOCK_METHOD0(isGood, bool());
};

