/**
 * @file 24.cpp
 * @author @roxxamay
 * @brief this is the 24th pattern program 
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
    cout  <<  "enter the number of lines : " ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int space = i - 1 ;

        while( space )
        {
            cout  <<  " " ;
            space--  ;
        }

        int j = i ;
        while( j <= n )
        {
            cout  <<  j ;
            j++ ;

        }
        cout  <<  endl  ;
        i++  ;

    }
}