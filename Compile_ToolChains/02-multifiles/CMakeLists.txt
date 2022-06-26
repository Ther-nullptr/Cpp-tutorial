# build part
cmake_minimum_required(VERSION 3.5)
project (invsqrt)
set(SOURCES src/invsqrt.cpp src/main.cpp)
add_executable(invsqrt ${SOURCES})
target_include_directories(invsqrt PUBLIC ${PROJECT_SOURCE_DIR}/include)

# debug part
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")

message("SOURCES: ${SOURCES}")