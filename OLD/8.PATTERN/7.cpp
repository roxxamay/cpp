/**
 * @file 7.cpp
 * @author @roxxamay
 * @brief this is the program number 7 of patterns
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int count = 1 , n ,i = 1 ;

    cout  <<  "enter the numbers of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        while( j <= i )
        {
            cout  <<  count  <<  " ";
            count++ ;
            j++ ;
        }
        cout  <<  endl  ;
        i++  ;
    }
}