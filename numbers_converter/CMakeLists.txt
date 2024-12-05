cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-numbers-converter
    DESCRIPTION "CPP-AP library demo project: numbers converter"
    LANGUAGES CXX
)

# Define the executable for the project
add_executable(numbers_converter_run
    app/main.cpp
    source/numbers_converter.cpp
)
target_include_directories(numbers_converter_run PRIVATE include)
set_target_properties(numbers_converter_run PROPERTIES OUTPUT_NAME "run")

# Link the cpp-ap library
target_link_libraries(numbers_converter_run PRIVATE cpp-ap)
