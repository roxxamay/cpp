/**
 * @file 14.cpp
 * @author @roxxamay
 * @brief this is the 14th program of pattern
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
    char ch = 'A';
    cout <<  "enter the number of line : " ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;

        while( j <= i )
        {

            cout  <<  ch  <<  " "  ;
            ch++ ; 
            j++ ;
        } 
        i++ ;
        cout  <<  endl ;
    }
}