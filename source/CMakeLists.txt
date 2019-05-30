find_package (Python COMPONENTS Interpreter Development)
add_executable(main Main.cpp Interpreter.cpp Application.cpp)
include_directories("${Python_INCLUDE_DIRS}")
target_link_libraries(main ${Python_LIBRARIES})
