# Sets cmake and c++ system requirements
cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

# sets project name, main, and exe file name
project(project3)
set(VAR my_project)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(SOURCES main.cpp)

# Specifies that app is a .exe file, creates file
add_executable(${VAR} ${SOURCES})

# Adds libs folder to file tree
add_subdirectory(libs)

# Tells cmake to use these libraries in the build process
target_link_libraries(${VAR} Person)