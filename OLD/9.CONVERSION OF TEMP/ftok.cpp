/**
 * @file ftok.cpp
 * @author @roxxamay
 * @brief Fahrenheit To Kelvin Formula
 * @version 0.1
 * @date 2022-12-03
 *
 *
 */

#include<iostream>

using namespace std ;

int main()
{
    float f ,k ;

    cout  <<  "enter the temp (in fahrenheit) " ;
    cin  >>  f ;

    //calculation

    k = 5.0 / 9.0 * ( f + 459.67 ) ;

    cout  <<"the temp (in kelvin) "  <<  k  <<  endl  ;

    return 0 ;
}