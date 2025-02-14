cmake_minimum_required(VERSION 3.12)

project(cpp-ap-demo-power-calculator
    DESCRIPTION "CPP-AP library demo project: power calculator"
    LANGUAGES CXX
)

# Define the executable for the project
add_executable(power_calculator_run power.cpp)
target_include_directories(power_calculator_run PRIVATE include)
set_target_properties(power_calculator_run PROPERTIES OUTPUT_NAME "run")

# Link the cpp-ap library
target_link_libraries(power_calculator_run PRIVATE cpp-ap-2)
