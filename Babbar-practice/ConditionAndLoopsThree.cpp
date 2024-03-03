/**
 * @file ConditionAndLoopsThree.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief 
 * @version 0.1
 * @date 2024-03-03
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include<iostream>
using namespace std ;

int main(){
    int a , b ;
    
    cout << "ENTER THE VALUE OF A : " ;
    cin >> a ;
    cout << "ENTER THE VALUE OF B : " ;
    cin >> b ;
    
    if ( a>b ){
        cout << "a is the greater " << endl;
    }
    if ( b > a ) {
        cout << "b is greater " << endl ;
    }
}