cmake_minimum_required(VERSION 3.23)
project(elaborato2023)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(test/)
add_subdirectory(test/lib/googletest-main/)

add_executable(elaborato2023 main.cpp)
add_library(core ProductList.cpp ProductList.h Observer.h Subject.h Product.h User.cpp User.h)
target_link_libraries(elaborato2023 core)