# CMake Demo Project

This is a simple demonstration project showcasing how to use CMake to build a C++ executable that links against a static library.

## Project Overview

The project consists of:

- A main executable (`RunMe`) that demonstrates squaring a number
- A math utility library (`MyMathLib`) containing basic mathematical functions

## Features

- Demonstrates CMake project structure with subdirectories
- Shows how to create and link static libraries
- Includes proper header file inclusion and linking

## Prerequisites

- CMake (version 3.10 or higher)
- A C++ compiler (e.g., g++, clang++)
- Make or Ninja build system

## Building the Project

1. Clone or download the project to your local machine.

2. Navigate to the project root directory:

   ```bash
   cd cmake_demo
   ```

3. Create a build directory and navigate into it:

   ```bash
   mkdir build
   cd build
   ```

4. Generate the build files using CMake:

   ```bash
   cmake ..
   ```

5. Build the project:
   ```bash
   make
   ```

## Running the Executable

After building, run the executable from the build directory:

```bash
./RunMe
```

You should see output similar to:

```
5 squared is: 25
```

## Project Structure

```
cmake_demo/
├── CMakeLists.txt          # Root CMake configuration
├── main.cpp                # Main executable source
├── MathBox/                # Math library subdirectory
│   ├── CMakeLists.txt      # Library CMake configuration
│   ├── tools.cpp           # Library implementation
│   └── tools.h             # Library header
└── build/                  # Build directory (generated)
    ├── RunMe               # Executable
    └── ...                 # Other build artifacts
```

## How It Works

1. The root `CMakeLists.txt` defines the project and adds the `MathBox` subdirectory.
2. The `MathBox/CMakeLists.txt` creates a static library `MyMathLib` from `tools.cpp`.
3. The root CMakeLists creates an executable `RunMe` from `main.cpp` and links it to `MyMathLib`.
4. The `main.cpp` includes `tools.h` and calls the `square_number` function from the library.

## Customization

You can extend this project by:

- Adding more functions to the `MathBox` library
- Creating additional subdirectories with other libraries
- Modifying the main program to use more library functions

## License

This project is for educational purposes. Feel free to use and modify it as needed.
