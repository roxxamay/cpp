/**
 * @file 19.cpp
 * @author @roxxamay
 * @brief this is the 19th patterns program
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int i = 1 , n ;

    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation for space

    while( i <= n )
    {
        int space = n - i ;
        while( space )
        {
            cout  << " "  ;
            space-- ;

        }
        int j = 1 ;
        while( j <= i )
        {
            cout  <<  "*"  ;
            j++ ;
        }
        i++ ;
        cout  <<  endl  ;
    }
}