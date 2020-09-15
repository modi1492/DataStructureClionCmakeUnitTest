add_library(example ""
        util/SqListUtil.cpp
        util/SqListUtil.h
        cpplearning/Student.cpp
        cpplearning/VLA.cpp)

target_sources(
    example
    PRIVATE
        basic/SqList/SqList.cpp
        Status/Status.cpp
        util/SqListUtil.cpp
        cpplearning/Student.cpp
        cpplearning/VLA.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/basic/SqList/SqList.h
        ${CMAKE_CURRENT_LIST_DIR}/Status/Status.h
        ${CMAKE_CURRENT_LIST_DIR}/util/SqListUtil.h
        ${CMAKE_CURRENT_LIST_DIR}/cpplearning/Student.h
        ${CMAKE_CURRENT_LIST_DIR}/cpplearning/VLA.h
        ${CMAKE_CURRENT_LIST_DIR}/cpplearning/CSample.h
        ${CMAKE_CURRENT_LIST_DIR}/cpplearning/People.h
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
