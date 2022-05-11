//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_HOUSE_H
#define PURUMA_PROJECT_HOUSE_H

#include "../Header.h"
#include "Facility.h"

class House:public Facility {
private:
    string standaHouse;
    int floor;
public:
    void output();

    House();

    House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standaHouse, int floor);
};


#endif //PURUMA_PROJECT_HOUSE_H
