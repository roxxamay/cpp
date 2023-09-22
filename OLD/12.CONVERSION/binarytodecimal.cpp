/**
 * @file binarytodecimal.cpp
 * @author @roxxamay
 * @brief a program for changing the binary to decimal
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int num , rem , b = 1 , temp , dec = 0 ;

    cout  <<  "enter the binary : "  ;
    cin  >>  num  ;
    temp = num ;
    while( temp > 0  )
    {
        rem = temp % 10 ;
        dec = dec +  rem * b  ;
        b *= 2 ;
        temp /= 10 ;
    } 

    cout  <<  "decimal of "  <<  num  << " is "  <<  dec ;

    return  0 ;
}