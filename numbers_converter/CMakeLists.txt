cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-numbers-converter
    DESCRIPTION "CPP-AP library demo project: numbers converter"
    LANGUAGES CXX
)

# Fetch CPP-AP library
include(FetchContent)
FetchContent_Declare(
    cpp-ap
    GIT_REPOSITORY https://github.com/SpectraL519/cpp-ap.git
    GIT_TAG master
)
FetchContent_MakeAvailable(cpp-ap)

# Define the executable for the project
add_executable(convert_numbers
    app/main.cpp
    source/numbers_converter.cpp
)

target_include_directories(convert_numbers PRIVATE include)
set_target_properties(convert_numbers PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

# Link the cpp-ap library
target_link_libraries(convert_numbers PRIVATE cpp-ap)
