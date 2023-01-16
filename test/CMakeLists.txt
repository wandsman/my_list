project(tests CXX C)

find_package(GTest REQUIRED)
set(TEST_LIBS gtest gmock pthread pthread gtest_main)
# Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests push_test.cpp)

target_link_libraries(runTests list ${TEST_LIBS})
