//
// Created by Nhân on 05/05/2022.
//

#include "Person.h"

Person::Person(const string &idCode, const string &nameOfBirth, const string &dateOfBirth, const string &sex,
               const string &idPerson, const string &phoneNumber, const string &emailAdress): idCode(idCode),
                                                                                               nameOfBirth(nameOfBirth),
                                                                                               dateOfBirth(dateOfBirth),
                                                                                               sex(sex),
                                                                                               idPerson(idPerson),
                                                                                               phoneNumber(phoneNumber),
                                                                                               emailAdress(
                                                                                                       emailAdress) {}
void Person::output()
{
    cout<<"Person{idCode: "<<idCode<<",nameOFBirth: "<<nameOfBirth<<",dateOfBirth: "<<dateOfBirth<<",sex: "<<sex<<",idPerson:"<<
    idPerson<<"phoneNumber: "<<phoneNumber<<"emailAdress: "<<emailAdress<<"}"<<endl;
}

