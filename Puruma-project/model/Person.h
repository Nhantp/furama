//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_PERSON_H
#define PURUMA_PROJECT_PERSON_H

#include "../Header.h"

class Person {
protected:
    string idCode;
    string nameOfBirth;
    string dateOfBirth;
    string sex;
    string phoneNumber;
    string emailAdress;

    string idPerson;
public:
    Person();

    Person(const string &idCode, const string &nameOfBirth, const string &dateOfBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAdress);
    virtual void output()=0;
};


#endif //PURUMA_PROJECT_PERSON_H
