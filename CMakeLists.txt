cmake_minimum_required(VERSION 3.12)
project(Mark1)

find_package (Python COMPONENTS Interpreter Development)
include_directories("${Python_INCLUDE_DIRS}")

#enable_testing()
add_subdirectory(source)
add_subdirectory(tests)
