#include <gtest/gtest.h>
#include "../src/FileRecordsReader.hpp"
TEST( FileReaderConstructor , whileConstructingFileNotFound ) {

    ASSERT_THROW(FileRecordsReader("sample.txt",5), exception);
}

#include "dummymain.h"


