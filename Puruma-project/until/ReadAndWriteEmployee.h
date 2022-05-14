//
// Created by Nhân on 13/05/2022.
//

#ifndef PURUMA_PROJECT_READANDWRITEEMPLOYEE_H
#define PURUMA_PROJECT_READANDWRITEEMPLOYEE_H

#include <iostream>
#include<list>
#include "../model/Employee.h"

using namespace std;

class ReadAndWriteEmployee {
public:
    list<Employee>readAllEmployee(string path);
    void WriteAllEmployee(string path,list<Employee> list);
};



#endif //PURUMA_PROJECT_READANDWRITEEMPLOYEE_H
