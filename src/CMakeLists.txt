add_library(example "" util/SqListUtil.cpp util/SqListUtil.h)

target_sources(
        example
        PRIVATE
        SqList/SqList.cpp

        sum/sum0.cpp
        sum/sum1.cpp
        sum/sum2.cpp

        random/randomSortedVector.cpp
        random/Shuffle.cpp

        reverse/reverse.cpp
        reverse/reverse-iterative-0.cpp
        reverse/reverse-iterative-1.cpp
        reverse/reverse-recursive.cpp

        UniPrint/print_int_array.cpp

        _share/util.h


        Status/Status.cpp
        util/SqListUtil.cpp


        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/SqList/SqList.h
        ${CMAKE_CURRENT_LIST_DIR}/Status/Status.h
        ${CMAKE_CURRENT_LIST_DIR}/util/SqListUtil.h

        ${CMAKE_CURRENT_LIST_DIR}/sum/sum.h


        ${CMAKE_CURRENT_LIST_DIR}/random/Shuffle.h
        ${CMAKE_CURRENT_LIST_DIR}/random/randomSortedVector.h
        ${CMAKE_CURRENT_LIST_DIR}/reverse/reverse.h
        ${CMAKE_CURRENT_LIST_DIR}/UniPrint/print_int_array.h
        ${CMAKE_CURRENT_LIST_DIR}/vector/vector.h
)

target_include_directories(
        example
        PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
)
