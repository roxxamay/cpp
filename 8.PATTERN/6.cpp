/**
 * @file 6.cpp
 * @author @roxxamay
 * @brief this is the program number 6 of pattern
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int n , i = 1 ;

    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        while(j <= i)
        {
            cout  <<  i ;
            j++ ;
        }
        cout  <<  endl  ;
        i++ ;
    }
}