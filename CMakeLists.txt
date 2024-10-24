cmake_minimum_required(VERSION 3.10)
project(tracy_example)

add_executable(tracy_example
src/main.cpp
)
option (TRACY_ENABLE " " ON)
add_subdirectory(tracy)

target_link_libraries (tracy_example PUBLIC Tracy::TracyClient)
include_directories(include)