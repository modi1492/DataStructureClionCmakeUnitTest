add_library(example "" util/SqListUtil.cpp util/SqListUtil.h)

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
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
