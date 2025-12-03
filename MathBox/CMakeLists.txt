# library named "MyMathLib" using the source file "tools.cpp"
add_library(MyMathLib tools.cpp)

# Allow other parts of the project to see the .h files in this folder
target_include_directories(MyMathLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})