/**
 * @file sumton.cpp
 * @author @roxxamay
 * @brief print the sum upto n .
 * @version 0.1
 * @date 2022-12-04
 * 0
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int n ;
    cout  <<  "enter the value of n : "   ;
    cin  >>  n  ;
    int sum = 0 ;
    for( int i = 1 ; i <= n ; i++ )
    {
        sum = sum + i ;
    }
    cout  <<  sum  <<  endl  ;
}