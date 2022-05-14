//
// Created by Nhân on 05/05/2022.
//

#include "Customer.h"

Customer::Customer() {}

Customer::Customer(const string &idCode, const string &name, const string &dateOfBirth, const string &sex,
                   const string &idPerson, const string &phoneNumber, const string &emailAdress,
                   const string &typeCustomer, const string &address) : Person(idCode, name, dateOfBirth, sex,
                                                                               idPerson, phoneNumber, emailAdress),
                                                                        typeCustomer(typeCustomer), address(address) {}

void Customer::output() {
    cout << "Customer { idCode: " << idCode << ", namePerson: " << name << ", dateOfBirth: " << dateOfBirth <<
         ", sex: " << sex << ", idPerson: " << idPerson << ", phoneNumber: " << phoneNumber << ", emailAddress: " <<
         emailAdress << ", typeCustomer: " << typeCustomer << ", address: " << address << " }" << endl;
}



