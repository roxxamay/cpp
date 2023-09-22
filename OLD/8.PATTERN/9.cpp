/**
 * @file 9.cpp
 * @author @roxxamay
 * @brief this is the program number 9 of pattern
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int n , i = 1 ;

    cout  <<  "enter the numbers of line : "  ;
    cin  >>  n  ;

    while( i <= n )
    {
        int j = 1 ;
        while( j <= i )
        {
            cout  <<  ( i - j + 1 ) <<  " "  ;
            j++ ;
        }
        cout  <<  endl  ;
        i++ ;
    }
}