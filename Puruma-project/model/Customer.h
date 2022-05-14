//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_CUSTOMER_H
#define PURUMA_PROJECT_CUSTOMER_H

#include "../Header.h"
#include "Person.h"

class Customer :Person{

protected:
    string typeCustomer;
    string address;
public:
    Customer();

    Customer(const string &idCode, const string &name, const string &dateOfBirth, const string &sex,
             const string &idPerson, const string &phoneNumber, const string &emailAdress, const string &typeCustomer,
             const string &address);

private:
    void output() override;

};


#endif //PURUMA_PROJECT_CUSTOMER_H
