/**
 * @file fibonacci.cpp
 * @author @roxxamay
 * @brief  fibonacci series
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
    int a = 0 ;
    int b = 1 ;
    int i ;

    cout <<  "enter the value of n : "  ;
    cin  >>  n  ;

    cout  <<  a  <<  "  "  <<  b  <<  "  "  ;

    for ( i = 1; i <= n ; i++)
    {
        int nextnumber = a + b ;
        cout  <<  nextnumber  << " "  ;
        a = b ;
        b = nextnumber ;
    }
    
}