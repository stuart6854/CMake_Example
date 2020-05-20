cmake_minimum_required(VERSION 3.0.0)
project(app_proj VERSION 0.1.0)


include(CTest)

add_subdirectory(lib_proj)
add_subdirectory(header_only_lib_proj)
add_subdirectory(app_proj)

add_subdirectory(testing)