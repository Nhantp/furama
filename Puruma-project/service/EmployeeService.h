//
// Created by Nhân on 13/05/2022.
//

#ifndef PURUMA_PROJECT_EMPLOYEESERVICE_H
#define PURUMA_PROJECT_EMPLOYEESERVICE_H
#include<iostream>
#include<list>
#include "../model/Employee.h"

class EmployeeService {
public:
void display();
void create();
void edit();
private:
list<Employee>list;

};


#endif //PURUMA_PROJECT_EMPLOYEESERVICE_H
