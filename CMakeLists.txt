cmake_minimum_required(VERSION 3.23)
project(elaborato2023)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test/lib/googletest-main/)
set(gtest_SOURCE_DIR, test/lib/googletest-main/)
include_directories(${gtest_SOURCE_DIR}/include
        ${gtest_SOURCE_DIR})

add_executable(elaborato2023 main.cpp ProductList.cpp ProductList.h Observer.h Subject.h Product.h User.cpp User.h)