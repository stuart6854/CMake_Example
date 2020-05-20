cmake_minimum_required(VERSION 3.0.0)
project(header_only_lib_proj)

# include(CTest)
# enable_testing()

add_library(${PROJECT_NAME} INTERFACE)
add_library(sub::lib2 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    INTERFACE
        ${PROJECT_SOURCE_DIR}/include
)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
