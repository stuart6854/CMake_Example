cmake_minimum_required(VERSION 3.0)

project(Testing)

#add_subdirectory(3rd_party/catch2)
set(CATCH_INCLUDE_DIR 3rd_party/catch2)
add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CATCH_INCLUDE_DIR})

add_executable(${PROJECT_NAME}
    src/unit_tests.cpp
)

target_link_libraries(${PROJECT_NAME}
    sub::lib1
    Catch
)

add_test(test_all ${PROJECT_NAME})