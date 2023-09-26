/**
 * @file Employee.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief program to demonstrate inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

using namespace std ;

class Employee{
    private :
        int eid ;
        string name ;

    public :
        Employee(int e , string n){
            eid = e ;
            name = n ;
        }
        int getEmployeeID(){
            return eid ;
        }
        string getName(){
            return name ;
        }
};

class FullTimeEmployee:public Employee {
    private :
        int salary ;
    public :
        FullTimeEmployee(int e ,string n ,int sal ):Employee(e,n){
            salary = sal ;
        }

        int getSalary(){
            return salary ;
        }

};

class PartTimeEmployee: public Employee {
    private : 
        int wage ;
    public :
        PartTimeEmployee(int e , string n ,int w):Employee(e,n){
            wage = w ;
        }
        int getWage(){
            return wage;
        }
};

int main(){
    PartTimeEmployee p1(1 , "john" , 3000);
    FullTimeEmployee p2(2 , "raj" , 5000);

    cout << "salary of " << p2.getName() << " is " << p2.getSalary() << endl ;
    cout << "daily wage  of " << p1.getName() << " is " << p1.getWage() << endl ;

    return 0;
}