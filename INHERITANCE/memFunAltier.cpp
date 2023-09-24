/**
 * @file memFunAltier.cpp
 * @author @roxxamay
 * @brief Example: define member function without argument within the class
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include "iostream"

 using namespace std ;

 class Person{
    private :
                int id ;
                char name[50] ;
    
    public : 
                void set_p();
                void display_p();

 };

  void Person::set_p(){
    cout << "enter the name of person : " ;
    cin >> name ;

    cout << "enter the id : " ;
    cin >> id ;
 }

 void Person::display_p(){
    cout << "name : " << name << "\nid : " << id << endl ;
 }

 class Student:private Person{
    char course[25] ;
    int fee ;

    public : 
                void set_s();
                void display_s();
 };



void Student::set_s(){
    set_p();

    cout << "enter the course name : " ;
    cin >> course ;

    cout << "enter the amount of the fee : " ;
    cin >> fee ;
} 

void Student::display_s(){
    display_p();

    cout << "course : " << course << "\nfee : " << fee << endl ;

}

int main(){
    Student s ;

    s.set_s();
    s.display_s();

    return 0 ;
}