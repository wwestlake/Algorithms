# CMakeList.txt : CMake project for Algorithms, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_definitions(-DBOOST_ALL_DYN_LINK)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

find_package (Threads)

set(BOOST_ROOT /home/wwestlake/boost)
set(Boost_USE_STATIC_LIBS        OFF)  # only find static libs
set(Boost_USE_DEBUG_LIBS         OFF) # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME    OFF)
find_package(Boost 1.72.0 COMPONENTS
    system
    log 
    program_options
    log_setup
    date_time
    thread
    filesystem
)
if(Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
  add_executable (mmix "mmix.cpp" "mmix.h")
  endif()



# Add source to this project's executable.

# TODO: Add tests and install targets if needed.
