cmake_minimum_required(VERSION 3.28)
project(ManagerProgramm)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(ManagerProgramm
        src/main.cpp
        src/Person.cpp
        src/Employee.cpp
        src/Manager.cpp)
