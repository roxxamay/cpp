/**
 * @file 3.cpp
 * @author @roxxamay
 * @brief 
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include<iostream>

using namespace std ;

int main()
{
    int  n , j , i=1 ;
    cout  <<  "enter the number of lines : "  ;
    cin  >>  n ;

    //calculation
    
    while( i <= n )
    {
        j = n ;
        while( j >= 1 )
        {
            cout  <<  j  ;
            j-- ;

        }
        cout  <<  endl  ;
        i++ ;
    }
}
/** ALTIER
 * int j=1;
 * while(j<=n)
 * {    cout  << n-j+1;
 *      j++;
 * }
 * 

 * 
 */