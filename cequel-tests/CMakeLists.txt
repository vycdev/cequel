# CMakeList.txt : CMake project for cequel tests, include source and define
# project specific logic here.
#
find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${TEST_SOURCE_DIR}/src
                     ${Boost_INCLUDE_DIRS}
                     )
add_definitions (-DBOOST_TEST_DYN_LINK)
add_executable (Test ceqle-tests.cpp)
target_link_libraries (Test
                       Sqr
                       ${Boost_FILESYSTEM_LIBRARY}
                       ${Boost_SYSTEM_LIBRARY}
                       ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
                       )
add_test (NAME MyTest COMMAND Test)