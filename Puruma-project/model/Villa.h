//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_VILLA_H
#define PURUMA_PROJECT_VILLA_H

#include "../Header.h"
#include "Facility.h"

class Villa:public Facility {
private:
    string standarVilla;
    double areaPool;
    int floor;
public:
    Villa();

    Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
          const string &styleRental, const string &standaVilla, double areaPool, int floor);

    void output();
};


#endif //PURUMA_PROJECT_VILLA_H
