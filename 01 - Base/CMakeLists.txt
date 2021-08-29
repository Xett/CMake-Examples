#CMake 3.18  released  16 July 2020
cmake_minimum_required(VERSION 3.18)

#Set the project name and version
project(Base VERSION 1.0)

#Specify the C++ Standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Base "Base.cxx")

#Pass Config.h.in to pass the version number to the source code
configure_file(Config.h.in Config.h)

#Config.h will be written into the binary tree, so we must add that directory to the list of paths for include files.
target_include_directories(Base PUBLIC "${PROJECT_BINARY_DIR}")
