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
        basic/List/SqList/SqList.cpp
        basic/List/LinkList/LinkList.cpp
        basic/List/SLinkList/SLinkList.cpp
        basic/List/DuLinkList/DuLinkList.cpp
        basic/List/ELinkList/ELinkList.cpp

        Status//Status.cpp
        util/SqListUtil.cpp
        util/LinkListUtil.cpp
        util/EListUtil.cpp
        util/util.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/basic/List/SqList/SqList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/List/LinkList/LinkList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/List/SLinkList/SLinkList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/List/DuLinkList/DuLinkList.h
        ${CMAKE_CURRENT_LIST_DIR}/basic/List/ELinkList/ELinkList.h

        ${CMAKE_CURRENT_LIST_DIR}/Status/Status.h
        ${CMAKE_CURRENT_LIST_DIR}/util/LinkListUtil.h
        ${CMAKE_CURRENT_LIST_DIR}/util/SqListUtil.h
        ${CMAKE_CURRENT_LIST_DIR}/util/util.h
        ${CMAKE_CURRENT_LIST_DIR}/util/EListUtil.cpp
    )

target_include_directories(
    example
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )
