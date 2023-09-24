/**
 * @file memFunThree.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief // Example: define member function with argument outside the class
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */


 #include "iostream"
 #include "string.h"

 using namespace std ;

 class Person{
    int id ;
    char name[50] ;

    public :
            void set_p(int,char[]);
            void display_p();

 };

 void Person::set_p(int id , char n[]){
    this->id = id ;
    strcpy(this->name , n);
 }

 void Person::display_p(){
    cout << endl << "name : " << name << "\nid : " << id << endl ;
 }


 class Student:private Person{
    int fees ;
    char course[25] ;

    public :
            void set_s(int ,char[] , int , char[] );
            void display_s();


 };

 void Student::set_s(int id ,char n[] , int f, char c[]){
    set_p(id , n ) ;
    fees = f ;
    strcpy(course , c) ;
 }
 void Student :: display_s() {
    display_p();
    cout << "fees : " << fees << "\ncourse :  " << course << endl ;
 }

 int main(){
    Student s ;

    s.set_s(5454145,"adsadj" , 56465,"adfd");
    s.display_s();
    return 0;
 }