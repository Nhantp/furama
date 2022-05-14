//
// Created by Nhân on 05/05/2022.
//

#include "Employee.h"

Employee::Employee() {}

Employee::Employee(const string &idCode, const string &name, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAdress, const string &level,
                   const string &position, float salary) : Person(idCode, name, dateOfBirth, sex, idPerson,
                                                                  phoneNumber, emailAdress), level(level),
                                                           position(position), salary(salary) {}

void Employee::output() {
    cout << "Employee { idCode: " << idCode << ", namePerson: " << name << ", dateOfBirth: " << dateOfBirth <<
         ", sex: " << sex << ", idPerson: " << idPerson << ", phoneNumber: " << phoneNumber << ", emailAddress: " <<
         emailAdress << ", level: " << level << ", position: " << position << ", salary: " << salary << " }" << endl;
}

const string &Employee::getLevel() const {
    return level;
}

void Employee::setLevel(const string &level) {
    Employee::level = level;
}

const string &Employee::getPosition() const {
    return position;
}

void Employee::setPosition(const string &position) {
    Employee::position = position;
}

float Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(float salary) {
    Employee::salary = salary;
}

