/**
 * @file ExampleMultiInher.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief C++ program to explain multiple inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream"

using namespace std ;

class Vehicle{
    public: 
        Vehicle(){cout << "this is a vehicle \n " ;} 
};

class FourWheeler{
    public :
        FourWheeler(){
            cout << "this is 4 wheeler vehicle \n" ;
        }
};

class Car : public Vehicle , public FourWheeler {
    public :
    Car(){
        cout << "this is a car " ; 
    }
};

int main(){
    Car obj ;

    return 0 ;
}