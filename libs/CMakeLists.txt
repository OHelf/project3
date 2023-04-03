# Adds include folder and contents to cmake project path
add_subdirectory(include)
include_directories(include)

# Assigns Person.cpp as a library
add_library(Person SHARED Person.cpp)
