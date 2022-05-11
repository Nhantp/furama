//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_FACILITY_H
#define PURUMA_PROJECT_FACILITY_H

#include "../Header.h"

class Facility {
protected:
    string idFacility;
    string nameService;
    double areaUse;
    double rentalPrice;
    int rentalMaxPeople;
    string styleRental;
public:
    Facility();

    Facility(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental);
    virtual void output();

};


#endif //PURUMA_PROJECT_FACILITY_H
