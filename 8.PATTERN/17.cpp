/**
 * @file 17.cpp
 * @author @roxxamay
 * @brief  this is the 17th patterns program
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
    char ch = ('A' + n - 1);
    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        char ch = ('A' + n - i);
        while( j <= i )
        {

            cout  <<  ch  <<  " "  ;
            j++ ;
            ch++ ;
        }
        i++ ;
        cout  <<  endl  ;
    }
}