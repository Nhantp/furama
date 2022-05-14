//
// Created by Nhân on 13/05/2022.
//

#include "ReadAndWriteEmployee.h"
#include<iostream>
#include <fstream>
#include <list>

using namespace std;

void ReadAndWriteEmployee::WriteAllEmployee(string path, list<Employee> list) {
    ofstream fileOut(path,ios_base::out);
    for(Employee e:list){
        fileOut<<e.getIdCode()<<","<<e.getName()<<","<<e.getDateOfBirth()<<","<<e.getSex()<<","<<e.getIdPerson()<<","<<
        e.getPhoneNumber()<<","<<e.getEmailAdress()<<","<<e.getLevel()<<","<<e.getLevel()<<","<<e.getPosition()<<","<<
        e.getSalary();
    }
}

list<Employee> ReadAndWriteEmployee::readAllEmployee(string path) {
    ifstream fileIn(path,ios_base::in);
    list<Employee>list;
    if(fileIn.is_open())
    {
        cout<<"Mo file thanh cong."<<endl;
        while(!fileIn.eof())
        {
            string idCode;
            getline(fileIn,idCode,',');
            string name;
            getline(fileIn,name,',');
            string dateOfBirth;
            getline(fileIn,dateOfBirth,',');
            string sex;
            getline(fileIn,sex,',');
            string idPerson;
            getline(fileIn,idPerson,',');
            string phoneNumber;
            getline(fileIn,phoneNumber,',');
            string emailAdress;
            getline(fileIn,emailAdress,',');
            string level;
            getline(fileIn,level,',');
            string position;
            getline(fileIn,position,',');
            float salary;
            fileIn>>salary;
            Employee e(idCode,name,dateOfBirth,sex,idPerson,phoneNumber,emailAdress,level,position,salary);
            list.push_back(e);
        }
        fileIn.close();
    }
    else
        cout<<"Mo file ko thanh cong.";
    return list;

}
