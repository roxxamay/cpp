/**
 * @file ExampleOne.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief example of pointers
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream"

using namespace std ;


int main(){
    int a = 10 ;
    int *p =&a ;

    cout<< "a : " << a << endl;
    cout<< "&a : " << &a << endl;
    cout<< "p : " << p << endl;
    cout<< "&p : " << &p << endl;
    cout<< "*p : " << *p << endl;

    return 0 ;
}