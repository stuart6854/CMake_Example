cmake_minimum_required(VERSION 3.0.0)
project(app_proj)

#include(CTest)
#enable_testing()

if(${CMAKE_SYSTEM_NAME} STREQUAL Windows)
    message("Building for Windows")
elseif(${CMAKE_SYSTEM_NAME} STREQUAL Linux)
    message("Building for Linux")
endif()

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/Hello.cpp
)

target_include_directories(${PROJECT_NAME} 
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

target_link_libraries(${PROJECT_NAME}
    sub::lib1
    sub::lib2
)


#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)
