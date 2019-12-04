cmake_minimum_required(VERSION 3.15)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

find_package(Qt5Widgets REQUIRED)

add_executable(HelloWorld main.cpp buttonWidget.h)

target_link_libraries(HelloWorld Qt5::Widgets)