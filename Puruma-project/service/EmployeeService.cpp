//
// Created by Nhân on 13/05/2022.
//
#include <iostream>
#include "EmployeeService.h"
#include "../until/ReadAndWriteEmployee.h"

void EmployeeService::display() {
    list=ReadAndWriteEmployee().readAllEmployee("D:\\furama\\Puruma-project\\data\\employee");
    for(Employee e:list){
        e.output();
    }

}

void EmployeeService::create() {
    list=ReadAndWriteEmployee().readAllEmployee("D:\\furama\\Puruma-project\\data\\employee");
    int n = list.size();
    string idCode="NV-000" + to_string(n);
    string name;
    getline(cin,name);
    string dayOfBirth;
    getline(cin,dayOfBirth);
    string sex;
    getline(cin,sex);
    string idPerson;
    getline(cin,idPerson);
    string phoneNumber;
    getline(cin,phoneNumber);
    string emailAddress;
    getline(cin,emailAddress);
    string level;
    getline(cin,level);
    string position;
    getline(cin,position);
    float salary;
    cin>>salary;
    Employee e(idCode,name,dayOfBirth,sex,idPerson,phoneNumber,emailAddress,level,position,salary);
    list.push_back(e);
    ReadAndWriteEmployee().WriteAllEmployee("D:\\furama\\Puruma-project\\data\\employee",list);
}

void EmployeeService::edit() {

}
