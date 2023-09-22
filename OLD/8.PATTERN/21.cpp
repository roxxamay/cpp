/**
 * @file 21.cpp
 * @author @roxxamay
 * @brief this is the 21st pattern program
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

    while( i <= n )
    {
        int space = i - 1 ;
        while( space )
        {
            cout  <<  " "  ;
            space--  ;
        }
        int j = 1 ;
        while( j <= ( n - i + 1 ) ) 
        {
            cout  << "*"  ;
            j++ ;
        }
        cout  <<  endl  ;
        i++ ;
    }
}