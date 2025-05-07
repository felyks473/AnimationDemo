cmake_minimum_required(VERSION 3.22.1)
project(AnimationDemo LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O3")

add_subdirectory(lib/glfw)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

set(SOURCES
    ${CMAKE_SOURCE_DIR}/lib/glad.c
    #${CMAKE_SOURCE_DIR}/lib/additional.cpp
    #${CMAKE_SOURCE_DIR}/src/Shader.cpp
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    #${CMAKE_SOURCE_DIR}/src/Sprite.cpp
)

add_executable(AnimationDemo ${SOURCES})

target_include_directories(AnimationDemo PUBLIC 
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/lib
)

target_link_libraries(AnimationDemo PRIVATE OpenGL::GL glfw)
