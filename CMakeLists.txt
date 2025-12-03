# 1. Specify the minimum version of CMake required (Standard safety check)
cmake_minimum_required(VERSION 3.10)

# 2. Name your project
project(CMakeDemoProject)

# Add the MathBox subdirectory to build the library
add_subdirectory(MathBox)

# 3. The "Recipe": Tell CMake to make an executable file named "RunMe"
#    using the source file "main.cpp"
add_executable(
    RunMe 
    main.cpp
)

# 4. The GLUE
# This tells CMake: "Take the RunMe and stick the MyMathLib code onto it."
target_link_libraries(RunMe PUBLIC MyMathLib)