cmake_minimum_required(VERSION 3.0.0)

project(cmakeGL)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(extern/glfw)

add_executable(
    cmakeGL
    src/main.cpp
)

target_include_directories(cmakeGL PUBLIC extern/glfw/include)
target_link_directories(cmakeGL PRIVATE extern/glfw/src)
target_link_libraries(cmakeGL glfw)