cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-verbosity
    DESCRIPTION "CPP-AP library demo project: verbosity"
    LANGUAGES CXX
)

# Define the executable for the project
add_executable(verbosity_run
    app/main.cpp
    source/verbosity.cpp
)
target_include_directories(verbosity_run PRIVATE include)
set_target_properties(verbosity_run PROPERTIES OUTPUT_NAME "run")

# Link the cpp-ap library
target_link_libraries(verbosity_run PRIVATE cpp-ap-2)
