#[[ CMakeLists.txt ]]

# Set the minimum version of CMake that can be used
cmake_minimum_required(VERSION 3.0)

# Project name
project(Sudhana)

#get all the include files
aux_source_directory(./class DIR_SRCS)

# Add the source files to the project
add_executable(Sudhana main.c ${DIR_SRCS})