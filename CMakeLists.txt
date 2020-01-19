cmake_minimum_required(VERSION 3.9)
project(ctp_cmd)
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib)

add_subdirectory (src/ctp_trade)  