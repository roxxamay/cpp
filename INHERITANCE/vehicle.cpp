/**
 * @file vehicle.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief C++ program to explain Single inheritance
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include<iostream>

 using namespace std ;

 class vehicle{
    public:    vehicle(){
                            cout << "this is vehicle " << endl ;

                        }
 };

 class car:public vehicle{

 };

 int main(){
    car obj ;
 }
