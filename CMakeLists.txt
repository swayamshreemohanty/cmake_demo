# 1. Specify the minimum version of CMake required (Standard safety check)
cmake_minimum_required(VERSION 3.10)

# 2. Name your project
project(MyFirstCMakeProject)

# 3. The "Recipe": Tell CMake to make an executable file named "RunMe"
#    using the source file "main.cpp"
add_executable(
    RunMe 
    main.cpp
    calc.cpp
)