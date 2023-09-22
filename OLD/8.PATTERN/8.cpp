/**
 * @file 8.cpp
 * @author @roxxamay
 * @brief this is the program number 8 of pattern
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int n , value , i = 1;

    cout  <<  "enter the value : " ;
    cin >>  n  ;

    //calculation 

    while( i <= n )
    {
        int j = 1;
        while (j <= i)
        {
            value =( i + j - 1) ;
            cout << value <<  " " ;
            value++ ;
            j++ ;
        }
        cout << endl ;
        i++ ;
    }

}