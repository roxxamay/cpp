/**
 * @file countton.cpp
 * @author @roxxamay
 * @brief print the counting number to n .
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int n ;
    cout  <<  " enter the value of n "  ;
    cin  >>  n   ;
    cout  <<  " printing from 1 to n "  <<  endl  ;

    for(int i = 1 ; i <= n ; i++ )
    {
        cout  <<  i  <<  endl  ;
    }
}