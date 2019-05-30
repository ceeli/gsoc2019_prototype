find_package(GTest REQUIRED)

add_executable(
    FreeCADTest
    TestRuntime.cpp
    TestObject.cpp
)

target_link_libraries(
    FreeCADTest
    runtime
    GTest::GTest
    GTest::Main
    ${Python_LIBRARIES}
)

add_custom_target(check COMMAND FreeCADTest)
#add_test(unit FreeCADTest)
