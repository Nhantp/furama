//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_EMPLOYEE_H
#define PURUMA_PROJECT_EMPLOYEE_H

#include "../Header.h"
#include "Person.h"

class Employee :public Person {
private:
    string level;
    string position;
    float salary;
public:
    Employee();

    Employee(const string &idCode, const string &nameOfBirth, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAdress, const string &level,
             const string &position, float salary);
    void output();
};


#endif //PURUMA_PROJECT_EMPLOYEE_H
