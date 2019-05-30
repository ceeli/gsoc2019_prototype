add_library(runtime)
target_sources(
    runtime
    PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Interpreter.h
    ${CMAKE_CURRENT_LIST_DIR}/Application.h
    ${CMAKE_CURRENT_LIST_DIR}/Document.h
    ${CMAKE_CURRENT_LIST_DIR}/Object.h
    PRIVATE Interpreter.cpp Application.cpp Document.cpp
)
target_include_directories(runtime PUBLIC ${CMAKE_CURRENT_LIST_DIR})
add_executable(main Main.cpp Interpreter.cpp Application.cpp Document.cpp)
target_link_libraries(main ${Python_LIBRARIES})
