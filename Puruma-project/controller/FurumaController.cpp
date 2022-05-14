//
// Created by Nhân on 13/05/2022.
//
#include "FurumaController.h"
#include "EmployeeManagement.h"

using namespace std;

int menu(){
    cout<<"1.CustomerManagement"<<endl;
    cout<<"2.EmployeeManagement"<<endl;
    cout<<"3.FacilityManagement"<<endl;
    cout<<"4.BookingManagement"<<endl;
    cout<<"5.PromotionManagement"<<endl;
    int mn;
    cin>>mn;
    return mn;

}

 void FurumaController::displayMainMenu(){
    while(1) {
        int mn=menu();
        switch (mn) {
            case 1:

            case 2:
                EmployeeManagement employeeManagement;
                employeeManagement.employeeMenu();
                break;

            case 3:

            case 4:

            case 5:

            case 6:
                exit(0);
                break;
        }
    }
}


