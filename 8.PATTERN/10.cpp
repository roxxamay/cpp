/**
 * @file 10.cpp
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
    int i = 1 , n ;

    cout  << "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        while( j <= n )
        {
            char ch =('A' + i - 1)  ;
            cout  <<  ch  <<  " "  ;
            j++ ;
        }
        cout  <<  endl  ;
        i++ ;
    }
}