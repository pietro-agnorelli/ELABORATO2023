cmake_minimum_required(VERSION 3.5)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(runAllTests RunAllTests.cpp ProductTests.cpp ProductListFixture.cpp)
target_link_libraries(runAllTests core)
target_link_libraries(runAllTests gtest gtest_main)