/**
 * @file ctok.cpp
 * @author @roxxamay
 * @brief convert celsius to kelvin formula
 * @version 0.1
 * @date 2022-12-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include<iostream>

using namespace std ;

int main()
{
    float k , c ;

    cout  <<  "enter the temperature (in celsius) "  ;
    cin  >>  c  ;

    //calculation

    k = c + 273.15 ;

    cout  <<  "temp in kelvin is "  <<  k  << endl  ;

    return 0  ;
}