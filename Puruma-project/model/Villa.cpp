//
// Created by Nhân on 05/05/2022.
//

#include "Villa.h"

Villa::Villa() {}

Villa::Villa(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental, const string &standaVilla, double areaPool, int floor)
        : Facility(idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, styleRental),
          standarVilla(standaVilla), areaPool(areaPool), floor(floor) {}

void Villa::output() {
    Facility::output();
}

