cmake_minimum_required(VERSION 3.27)
project(practice_5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(problem01 problem01.cpp)
target_link_libraries(problem01 PRIVATE Qt6::Widgets)

qt_add_executable(problem02 problem02.cpp)
target_link_libraries(problem02 PRIVATE Qt6::Widgets)

qt_add_executable(problem03 problem03.cpp)
target_link_libraries(problem03 PRIVATE Qt6::Widgets)