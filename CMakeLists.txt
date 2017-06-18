cmake_minimum_required(VERSION 2.8)

project(blabla_project CXX)

include_directories(src)

add_subdirectory(src)

add_executable(blabla.exe blabla2.cpp)

target_link_libraries(blabla.exe bla-lib)

enable_testing()


add_subdirectory(test)

add_test(blabla_test test/blabla_test)
add_test(blabla2_test test/blabla2_test)
