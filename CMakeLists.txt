cmake_minimum_required(VERSION 3.5)

project(BasicGeometry LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Eigen3)
include_directories(${EIGEN3_INCLUDE_DIR})

include_directories(
./include
)

aux_source_directory(${PROJECT_SOURCE_DIR}/src DIR_SRC)

add_executable(BasicGeometry ${DIR_SRC})
