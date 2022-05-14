//
// Created by Nhân on 13/05/2022.
//
#include"EmployeeManagement.h"
void EmployeeManagement ::employeeMenu() {
    EmployeeService employeeService;
    while (1){
        int choise;
        cout<<"Employee Management:"<<endl;
        cout<<"1. Display Employee."<<endl;
        cout<<"2. Add Employee."<<endl;
        cout<<"3. Edit Employee."<<endl;
        cout<<"4. Exit."<<endl;
        cin>>choise;
        cin.ignore();

        switch (choise) {
            case 1:
                employeeService.display();
                break;
            case 2:
                employeeService.create();
                break;
            case 3:
                employeeService.edit();
                break;
            case 4:
                return;

        }
    }
}


