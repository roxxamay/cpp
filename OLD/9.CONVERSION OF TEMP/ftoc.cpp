/**
 * @file ftoc.cpp
 * @author @roxxamay
 * @brief with this program we convert Fahrenheit to Celsius
 * @version 0.1
 * @date 2022-11-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include"iostream"
using namespace std;

int main()
{
    float c,f;

    cout  <<  "enter the temp(in Fahrenheit) =" ;
    cin  >>  f  ;

    c = ( ( f - 32 ) * 5 ) / 9  ;

    cout  <<  "temp (in celsius) ="  <<  c  <<  endl ;
    return 0;
}