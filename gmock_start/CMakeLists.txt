cmake_minimum_required(VERSION 3.26)

project(gmock_start)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(/usr/local/include ${PROJECT_SOURCE_DIR})

file(GLOB SOURCE ${PROJECT_SOURCE_DIR}/test/test_*.cpp)

link_directories(/usr/local/lib)

add_executable(gmock_start ${SOURCE})

target_link_libraries(gmock_start gtest gmock)