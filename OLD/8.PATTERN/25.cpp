/**
 * @file 25.cpp
 * @author @roxxamay
 * @brief this is the 25th pattern program 
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
    int count = 1 ;
    
    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    while( i <= n )
    {
        int space = n-i ;
        while( space )
        {
            cout  <<  " " <<  " " ;
            space -- ;
        }

        int j = 1 ;
        while( j <= i )
        {
            cout  <<  count  <<  " "  ;
            j++ ;
            count++ ;

        }
        cout  <<  endl  ;
        i++  ;
    }
}