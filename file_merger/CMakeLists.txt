cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-file-merger
    DESCRIPTION "CPP-AP library demo project: file merger"
    LANGUAGES CXX
)

# Define the executable for the project
add_executable(file_merger_run merge_files.cpp)
target_include_directories(file_merger_run PRIVATE include)
set_target_properties(file_merger_run PROPERTIES OUTPUT_NAME "run")

# Link the cpp-ap library
target_link_libraries(file_merger_run PRIVATE cpp-ap-2)
