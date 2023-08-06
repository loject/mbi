cmake_minimum_required(VERSION 3.15)
project(mbi VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(extern/googletest)

add_subdirectory(include)
add_subdirectory(tests)
add_subdirectory(examples)
