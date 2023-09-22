/**
 * @file 15.cpp
 * @author @roxxamay
 * @brief 
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int n , i = 1 ;
    cout  <<  "enter the number of line : " ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        while( j <= i )
        {
            char ch = ( 'A' + i + j - 2) ;
            cout  <<  ch  <<  " "  ;
            j++ ;

        }
        i++ ;
        cout  <<  endl  ;
    }
}