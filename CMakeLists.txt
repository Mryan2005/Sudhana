#[[ CMakeLists.txt ]]
# CMake version
cmake_minimum_required(VERSION 3.0.0)

# Project name
project(Sudhana)

# Add the include directory to the project
include_directories(./class)

#get all the include files
aux_source_directory(./class DIR_SRCS)

# Add the source files to the project
add_executable(Sudhana ${DIR_SRCS} main.c)