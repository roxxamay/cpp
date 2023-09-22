/**
 * @file 20.cpp
 * @author @roxxamay
 * @brief this is the 20th pattern program
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

    while( i <= n )
    {
        int j = 1 ;
        while( j <= n - i + 1 )
        {
            cout  <<  "*"  ;
            j++;

        }
        i++ ;
        cout  <<  endl  ;
    }
}