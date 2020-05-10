cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the name of project
project(Tutorial VERSION 1.0)

option(USE_MYMATH "use tutorial provided math library" ON)

configure_file(TutorialConfig.h.in TutorialConfig.h)

if(USE_MYMATH)
    #add subdirectory
    add_subdirectory(MathFunctions)
    list(APPEND EXTRA_LIBS MathFunctions)
    list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/MathFunctions")
endif()

# add the executable
add_executable(Tutorial tutorial.cpp)


target_link_libraries(Tutorial PUBLIC MathFunctions)


target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}"   ${EXTRA_INCLUDES})



