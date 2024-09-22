# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)
project(CFDSolver)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add profiling flags for gprof
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pg")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pg")

# Include the src directory
include_directories(src)

# Add the executable
add_executable(CFDSolver src/main.cpp src/solver.cpp src/grid.cpp)