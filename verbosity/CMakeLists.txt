cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-verbosity
    DESCRIPTION "CPP-AP library demo project: verbosity"
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
add_executable(verbosity
    app/main.cpp
    source/verbosity.cpp
)

target_include_directories(verbosity PRIVATE include)
set_target_properties(verbosity PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

# Link the cpp-ap library
target_link_libraries(verbosity PRIVATE cpp-ap)
