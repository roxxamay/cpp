/**
 * @file 18.cpp
 * @author @roxxamay
 * @brief this is the 18th pattern program
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

    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        char ch = ( 'A' + i - 1 ) ;
        int j = 1 ;
        while( j <= n )
        {
            cout  <<  ch  <<  " "  ;
            j++ ;
            ch++ ;
        }
        i++ ;
        cout  <<  endl  ;
    }
}