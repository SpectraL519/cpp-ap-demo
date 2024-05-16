cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-power-calculator
    DESCRIPTION "CPP-AP library demo project: power calculator"
    LANGUAGES CXX
)

# Fetch CPP-AP library
include(FetchContent)
FetchContent_Declare(
    cpp-ap
    GIT_REPOSITORY https://github.com/SpectraL519/cpp-ap.git
    GIT_TAG yt-cppap-7-cmake-integration
)
FetchContent_MakeAvailable(cpp-ap)

# Define the executable for the project
add_executable(power power.cpp)

target_include_directories(power PRIVATE include)
set_target_properties(power PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED YES
)

# Link the cpp-ap library
target_link_libraries(power PRIVATE cpp-ap)
