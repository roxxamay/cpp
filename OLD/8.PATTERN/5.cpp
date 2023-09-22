/**
 * @file 5.cpp
 * @author @roxxamay
 * @brief printing pattern question number 5
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int n , i = 1;

    cout  <<  "enter the value of lines : " ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1 ;
        while( j <= i )
        {
            cout  <<  "*"  ;
            j++ ;
        }

        cout  <<  endl  ;
        i++ ;
    }
}