file(GLOB_RECURSE SRC_FILES "*.cpp") 
add_library(${SRC_OBJ} SHARED ${SRC_FILES})

