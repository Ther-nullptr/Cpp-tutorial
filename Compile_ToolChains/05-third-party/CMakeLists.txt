cmake_minimum_required(VERSION 2.6)

project(cmake_with_gtest)

set(SOURCES src/mysqrt.cpp src/main.cpp)

find_package(GTest)
message("GTEST_LIBRARIES: ${GTEST_LIBRARIES}")
message("GTEST_INCLUDE_DIRS: ${GTEST_INCLUDE_DIRS}")

include_directories(${GTEST_INCLUDE_DIRS} ${PROJECT_SOURCE_DIR}/include)

add_executable(cmake_with_gtest ${SOURCES})
target_link_libraries(cmake_with_gtest ${GTEST_LIBRARIES} pthread)