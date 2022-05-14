//
// Created by Nhân on 05/05/2022.
//

#include "House.h"

House::House() {}

House::House(const string &idFacility, const string &nameService, double areaUse, double rentalPrice,
             int rentalMaxPeople, const string &styleRental, const string &standaHouse, int floor) : Facility(
        idFacility, nameService, areaUse, rentalPrice, rentalMaxPeople, styleRental), standaHouse(standaHouse),
                                                                                                     floor(floor) {}

void House::output() {
    Facility::output();
}

