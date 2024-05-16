cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-file-merger
    DESCRIPTION "CPP-AP library demo project: file merger"
    LANGUAGES CXX
)

# Fetch CPP-AP library
include(FetchContent)
FetchContent_Declare(
    cpp-ap
    GIT_REPOSITORY https://github.com/SpectraL519/cpp-ap.git
    GIT_TAG cppap-rel-1.1
)
FetchContent_MakeAvailable(cpp-ap)

# Define the executable for the project
add_executable(merge_files merge_files.cpp)

target_include_directories(merge_files PRIVATE include)
set_target_properties(merge_files PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

# Link the cpp-ap library
target_link_libraries(merge_files PRIVATE cpp-ap)
