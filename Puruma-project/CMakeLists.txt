cmake_minimum_required(VERSION 3.22)
project(Puruma_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Puruma_project main.cpp model/Person.cpp model/Person.h Header.h model/Customer.cpp model/Customer.h model/Employee.cpp model/Employee.h model/Facility.cpp model/Facility.h model/Room.cpp model/Room.h model/Villa.cpp model/Villa.h model/House.cpp model/House.h)
