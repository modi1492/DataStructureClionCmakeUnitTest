add_executable(
        unit_tests
        SqTest.cpp
        StudentTest.cpp
        VLATest.cpp
        PeopleTest.cpp
        VectorTest.cpp
        ArrayTest.cpp)

target_link_libraries(
        unit_tests
        gtest_main
        example
)

add_test(
        NAME
        unit
        COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
)
