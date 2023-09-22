/**
 * @file ktoc.cpp
 * @author @roxxamay
 * @brief Kelvin to Celsius Formula
 * @version 0.1
 * @date 2022-12-03
 *
 *
 */

#include<iostream>

using namespace std ;

int main()
{
    float k ,c ;

    cout  <<  "enter temp (in kelvin) "  ;
    cin  >>  k  ;

    //calculation
    c = k - 273.15 ;

    cout  <<  "the temp (in celsius) " <<  c  <<  endl ;

    return 0 ;
    
}