//
// Created by Nhân on 05/05/2022.
//

#include "Person.h"

Person::Person(const string &idCode, const string &name, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAdress): idCode(idCode),
                                                                                               name(name),
                                                                                               dateOfBirth(dateOfBirth),
                                                                                               sex(sex),
                                                                                               idPerson(idPerson),
                                                                                               phoneNumber(phoneNumber),
                                                                                               emailAdress(
                                                                                                       emailAdress) {}
void Person::output()
{
    cout<<"Person{idCode: "<<idCode<<",nameOFBirth: "<<name<<",dateOfBirth: "<<dateOfBirth<<",sex: "<<sex<<",idPerson:"<<
    idPerson<<"phoneNumber: "<<phoneNumber<<"emailAdress: "<<emailAdress<<"}"<<endl;
}

Person::Person() {

}

const string &Person::getIdCode() const {
    return idCode;
}

void Person::setIdCode(const string &idCode) {
    Person::idCode = idCode;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

const string &Person::getDateOfBirth() const {
    return dateOfBirth;
}

void Person::setDateOfBirth(const string &dateOfBirth) {
    Person::dateOfBirth = dateOfBirth;
}

const string &Person::getSex() const {
    return sex;
}

void Person::setSex(const string &sex) {
    Person::sex = sex;
}

const string &Person::getPhoneNumber() const {
    return phoneNumber;
}

void Person::setPhoneNumber(const string &phoneNumber) {
    Person::phoneNumber = phoneNumber;
}

const string &Person::getEmailAdress() const {
    return emailAdress;
}

void Person::setEmailAdress(const string &emailAdress) {
    Person::emailAdress = emailAdress;
}

const string &Person::getIdPerson() const {
    return idPerson;
}

void Person::setIdPerson(const string &idPerson) {
    Person::idPerson = idPerson;
}

