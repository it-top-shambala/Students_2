cmake_minimum_required(VERSION 3.25)
project(Students)

set(CMAKE_CXX_STANDARD 17)

add_executable(Students main.cpp Subject.h Student.h StudentsDb.h Parser.h ConsoleHelper.h)
