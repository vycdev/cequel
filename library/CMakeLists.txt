cmake_minimum_required(VERSION 3.1)
project(cequel-library)

file(GLOB_RECURSE libcequel-sources CONFIGURE_DEPENDS "${CMAKE_CURRENT_LIST_DIR}/sources/cequel/*.cpp")
set(libcequel-include "${CMAKE_CURRENT_LIST_DIR}/include/")

add_library(libcequel)
target_compile_features(libcequel PUBLIC cxx_std_20)
target_sources(libcequel PRIVATE ${libcequel-sources})
set_target_properties(libcequel PROPERTIES PREFIX "" IMPORT_PREFIX "")
target_include_directories(libcequel PUBLIC ${libcequel-include})