# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project ("KnuthAlgorithms")



# Include sub-projects.
add_subdirectory ("Algorithms")

add_subdirectory ("MMIX")
