//
// Created by Nhân on 05/05/2022.
//

#include "Room.h"
Room::Room() {}

Room::Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
           const string &styleRental, const string &freeService) : Facility(idFacility, nameService, areaUse,
                                                                            rentalPrice, rentalMaxPeople, styleRental),
                                                                   freeService(freeService) {}

