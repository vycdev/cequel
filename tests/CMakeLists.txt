cmake_minimum_required(VERSION 3.1)
project(cequel-tests)

file(GLOB_RECURSE cequel-tests-sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/sources/*.cpp")

add_executable(cequel-tests)
target_compile_features(cequel-tests PUBLIC cxx_std_20)
target_sources(cequel-tests PRIVATE ${cequel-tests-sources})
target_link_libraries(cequel-tests PRIVATE libcequel Catch2::Catch2WithMain)