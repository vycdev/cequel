cmake_minimum_required(VERSION 3.1)
project(cequel-executable)

file(GLOB_RECURSE cequel-executable-sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/sources/*.cpp")
set(cequel-executable-include "${CMAKE_CURRENT_LIST_DIR}/include/")

add_executable(cequel-executable)
target_compile_features(cequel-executable PUBLIC cxx_std_20)
target_sources(cequel-executable PRIVATE ${cequel-executable-sources})
target_include_directories(cequel-executable PRIVATE ${cequel-executable-include})
target_link_libraries(cequel-executable PRIVATE libcequel)