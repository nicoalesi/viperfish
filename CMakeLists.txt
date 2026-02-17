cmake_minimum_required(VERSION 3.15)
project(Viperfish LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#file(GLOB SOURCES "src/*.cpp" "tests/*.cpp")

#add_executable(viper_test ${SOURCES})

#target_include_directories(viper_test PRIVATE src)

option(PERFT "Build the PERFT suite." ON)

if(PERFT)
    file(GLOB PERFT_SOURCES "src/*.cpp" "tests/perft/*.cpp")
    add_executable(perft ${PERFT_SOURCES})
    target_include_directories(perft PRIVATE src)
endif()
