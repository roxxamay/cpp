/**
 * @file ktof.cpp
 * @author @roxxamay
 * @brief Kelvin to Fahrenheit
 * @version 0.1
 * @date 2022-12-03
 *
 *
 */

#include<iostream>

using namespace std ;

int main()
{
    float  f ,  k ;
    
    cout  <<  "enter the temp (in kelvin)"  ;
    cin  >>  k  ;

    //calculation

    f = (k - 273.15) * 1.8 + 32 ;

    cout  <<  "the temp (in fahrenheit) is "  <<  f  <<  endl  ;
    return 0 ;
}