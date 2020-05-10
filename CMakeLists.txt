cmake_minimum_required(VERSION 3.10)

# set the name of project
project(Tutorial VERSION 1.0)

# add the executable
add_executable(Tutorial tutorial.cpp)

configure_file(TutorialConfig.h.in TutorialConfig.h)

target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


