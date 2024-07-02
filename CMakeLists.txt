cmake_minimum_required(VERSION 3.28)
project(the_cookie_lib C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
add_library(the_cookie_lib STATIC
        sources/the_cookie_lib.c include/the_cookie_lib.h
        sources/bool.c include/bool.h
        sources/output.c include/output.h
        sources/utils.c include/utils.h)