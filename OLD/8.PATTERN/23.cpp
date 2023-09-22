/**
 * @file 23.cpp
 * @author @roxxamay
 * @brief the 23rd pattern program
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
    cout  << "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation 

    while( i <= n )
    {
        int space = n - i ;
        while( space )
        {
            cout  <<  " "  ;
            space-- ;
        }
        int j = 1 ;
        while( j <= i)
        {
            cout  <<  i  ;
            j++ ;
        }
        cout  <<  endl  ;
        i++ ;
    }
}