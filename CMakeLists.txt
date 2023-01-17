cmake_minimum_required(VERSION 3.22)
project(my_list)

set(SOURCES sources/show.c sources/push.c sources/init.c sources/delete.c sources/pop.c)
set(HEADERS headers/my_list.h test/push_test.cpp)

include_directories(sources)
include_directories(headers)
add_subdirectory(test)

add_library(list STATIC ${SOURCES} ${HEADERS})# создание библиотеки

