add_library(example ""
        util/SqListUtil.cpp
        util/SqListUtil.h
        util/LinkListUtil.cpp
        util/LinkListUtil.h
        util/util.cpp
        util/util.h
        util/SLinkListUtil.cpp
        util/SLinkListUtil.h)

target_sources(
    example
    PRIVATE
        basic/SqList/SqList.cpp
        basic/LinkList/LinkList.cpp
        basic/SLinkList/SLinkList.cpp
        Status/Status.cpp
        util/SqListUtil.cpp
        util/LinkListUtil.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/basic/SqList/SqList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/LinkList/LinkList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/SLinkList/SLinkList.h
        ${CMAKE_CURRENT_LIST_DIR}/Status/Status.h
        ${CMAKE_CURRENT_LIST_DIR}/util/LinkListUtil.h
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
