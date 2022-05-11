//
// Created by Nhân on 05/05/2022.
//

#ifndef PURUMA_PROJECT_ROOM_H
#define PURUMA_PROJECT_ROOM_H

#include "../Header.h"
#include "Facility.h"

class Room:public Facility {
private:
    string freeService;
public:
    Room();

    Room(const string &idFacility, const string &nameService, double areaUse, double rentalPrice, int rentalMaxPeople,
         const string &styleRental, const string &freeService);

    void ouput();

};


#endif //PURUMA_PROJECT_ROOM_H
