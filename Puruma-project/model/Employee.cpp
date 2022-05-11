//
// Created by Nhân on 05/05/2022.
//

#include "Employee.h"

Employee::Employee() {}

Employee::Employee(const string &idCode, const string &nameOfBirth, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAdress, const string &level,
                   const string &position, float salary : Person(idCode, nameOfBirth, dateOfBirth, sex, idPerson,
                                                                  phoneNumber, emailAdress), level(level),
                                                           position(position), salary(salary) {}

void Employee::output() {
    cout<<"Employee: level: "<<level<<" "<<"position:"<<position<<
}

