/**
 * @file 4.cpp
 * @author @roxxamay
 * @brief pattern question number 4
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int i = 1 , n , cont =1 ;
    cout  <<  "enter the number of line : " ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1;
        while( j <= n )
        {
            cout  <<  cont  <<  " " ;
            cont++ ;
            j++ ;

        }
        cout  <<  endl  ;
        i++ ;
    }
    return 0 ;
}