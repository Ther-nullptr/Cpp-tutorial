cmake_minimum_required(VERSION 3.5)
project(invsqrt)

# create static library
add_library(invsqrt_static STATIC src/invsqrt.cpp)
target_include_directories(invsqrt_static PUBLIC ${PROJECT_SOURCE_DIR}/include)

# create executable
add_executable(invsqrt src/main.cpp)
target_link_libraries(invsqrt PRIVATE invsqrt_static)
