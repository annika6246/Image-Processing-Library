cmake_minimum_required(VERSION 3.22)
project(ImageLib)

set(CMAKE_CXX_STANDARD 17)

# setting compiler flag to NOT show deprecation warnings (triggered by stb library)
set(CMAKE_CXX_FLAGS "-Wno-deprecated")

# create a statically linked library named libimgLib
add_library(imgLib
        lib/src/Pixel.cpp
        lib/include/Pixel.h
        lib/src/Image.cpp
        lib/include/Image.h)
target_include_directories(imgLib PRIVATE lib/include lib/stb)

# create the executable and use libimgLib created above
add_executable(${CMAKE_PROJECT_NAME} driver.cpp
        lib/src/Pixel.cpp
        lib/include/Pixel.h)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE lib/include)
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE imgLib)