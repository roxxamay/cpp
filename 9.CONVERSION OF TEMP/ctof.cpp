/**
 * @file ctof.cpp
 * @author @roxxamay
 * @brief  in this program we learn to convert celsius to fahrenheit
 * @version 0.1
 * @date 2022-12-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

int main()
{
    float c,f;

    cout  << "enter the temperature(in celsius) "  ;
    cin  >>  c;

    //calculation

    f = (c * 9 / 5) + 32  ;

    cout  <<  "the temp in fahrenheit"  <<  f  << endl  ;

    return 0 ;
}