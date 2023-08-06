project(mbi_tests)
enable_testing()

add_executable(mbi_tests test.cpp)
target_link_libraries(mbi_tests PRIVATE mbi gtest gtest_main)

add_test(NAME mbi_tests COMMAND mbi_tests)

include(GoogleTest)
gtest_discover_tests(mbi_tests)