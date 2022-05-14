cmake_minimum_required(VERSION 3.22)
project(Puruma_project)

set(CMAKE_CXX_STANDARD 14)

add_executable(Puruma_project main.cpp model/Person.cpp model/Person.h Header.h model/Customer.cpp model/Customer.h model/Employee.cpp model/Employee.h model/Facility.cpp model/Facility.h model/Room.cpp model/Room.h model/Villa.cpp model/Villa.h model/House.cpp model/House.h service/EmployeeService.cpp service/EmployeeService.h service/CustomerService.cpp service/CustomerService.h until/ReadAndWriteEmployee.cpp until/ReadAndWriteEmployee.h until/ReadAndWriteCustomer.cpp until/ReadAndWriteCustomer.h controller/FurumaController.cpp controller/EmployeeManagement.cpp controller/CustomerManagement.cpp controller/FacilityManagement.cpp controller/BookingManagement.cpp controller/PromotionManagement.cpp controller/FurumaController.h controller/BookingManagement.h controller/CustomerManagement.h controller/EmployeeManagement.h controller/FacilityManagement.h controller/PromotionManagement.h)
