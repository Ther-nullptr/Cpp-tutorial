cmake_minimum_required(VERSION 3.5)
project(invsqrt)

# create shared library
add_library(invsqrt_shared SHARED src/invsqrt.cpp)
target_include_directories(invsqrt_shared PUBLIC ${PROJECT_SOURCE_DIR}/include)

# create executable
add_executable(invsqrt src/main.cpp)
target_link_libraries(invsqrt PRIVATE invsqrt_shared)
