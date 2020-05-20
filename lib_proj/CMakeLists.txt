cmake_minimum_required(VERSION 3.0.0)
project(lib_proj)

# include(CTest)
# enable_testing()

add_library(${PROJECT_NAME} 
    src/Vec3.cpp
    src/Reverse.cpp
)
add_library(sub::lib1 ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} 
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
