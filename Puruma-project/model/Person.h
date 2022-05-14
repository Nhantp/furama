//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_PERSON_H
#define PURUMA_PROJECT_PERSON_H

#include "../Header.h"

class Person {
protected:
public:
    const string &getIdCode() const;

    void setIdCode(const string &idCode);

    const string &getName() const;

    void setName(const string &name);

    const string &getDateOfBirth() const;

    void setDateOfBirth(const string &dateOfBirth);

    const string &getSex() const;

    void setSex(const string &sex);

    const string &getPhoneNumber() const;

    void setPhoneNumber(const string &phoneNumber);

    const string &getEmailAdress() const;

    void setEmailAdress(const string &emailAdress);

    const string &getIdPerson() const;

    void setIdPerson(const string &idPerson);

protected:
    string idCode;
    string name;
    string dateOfBirth;
    string sex;
    string phoneNumber;
    string emailAdress;
    string idPerson;
public:
    Person();

    Person(const string &idCode, const string &name, const string &dateOfBirth, const string &sex,
           const string &idPerson, const string &phoneNumber, const string &emailAdress);
    virtual void output()=0;
};


#endif //PURUMA_PROJECT_PERSON_H
