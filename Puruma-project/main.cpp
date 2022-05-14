#include <iostream>
#include "model/Employee.h"
#include "model/Customer.h"
#include "until/ReadAndWriteEmployee.h"
#include "controller/FurumaController.h"

int main() {
//    ReadAndWriteEmployee readAndWriteEmployee;
//    list<Employee>list= readAndWriteEmployee.readAllEmployee("D:\\furama\\Puruma-project\\data\\employee");
//        for(Employee e :list){
//            e.output();
//    }
//readAndWriteEmployee.WriteAllEmployee("D:\\furama\\Puruma-project\\data\\Output", list);
//    return 0;
FurumaController furumaController;
furumaController.displayMainMenu();
ReadAndWriteEmployee readAndWriteEmployee;
list<Employee>list= readAndWriteEmployee.readAllEmployee("D:\\furama\\Puruma-project\\data\\employee");
for(Employee e:list){
    e.output();
}
readAndWriteEmployee.WriteAllEmployee("D:\\furama\\Puruma-project\\data\\Output",list);
return 0;
}
