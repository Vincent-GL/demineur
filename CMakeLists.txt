cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(Minesweep VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER g++)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable target
file(GLOB SOURCES "src/*.cpp")
file(GLOB UTIL "src/Util/*.cpp")
file(GLOB CLASS "src/Class/*.cpp")
add_executable(Minesweep ${SOURCES} ${UTIL} ${CLASS})

#add_executable(Minesweep main.cpp)
