/**
 * @file ExampleHierInher.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief c++ program to implement Hierarchical Inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream" 

using namespace std ;

class Vehicle{
    public :
    Vehicle(){
        cout << "\nthis is a vehicle " ;
    }
};

class Car : public Vehicle{
    public :
    Car(){
        cout << "\nthis is car ";
    }
};

class Bus : public Vehicle{
    public :
    Bus(){
        cout << "\nthis is bus " ;
    }
};


int main(){
    Car objOne ;
    Bus objTwo ;

    return 0;
}