/**
 * @file ExampleHybridInher.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief C++ program for Hybrid Inheritance
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

class Fare{
    public :
        Fare(){
            cout << "\nfare of vehicle" ;
        }
};

class car : public Vehicle{
    public :
        car(){
            cout << "\nthis is car" ;
        }
};

class Bus : public Vehicle ,public Fare {
    public :
        Bus(){
            cout  << "\nfare of the Bus" ;
        }
};

int main(){
    Bus objTwo;

    return 0 ;
}