/**
 * @file prime.cpp
 * @author @roxxamay
 * @brief 
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int n ;
    int i ;
    cout  <<  "enter the value of n : "  ;
    cin  >>  n ;

    bool  isprime = 1 ;

    for ( i = 2; i < n; i++)
    {
        if( n % i == 0 )
        {
            isprime = 0 ;
            break;
        }
    }

    if( isprime == 0 )
    {
        cout  <<  n  << "  is  not a prime number "  <<  endl  ;

    }
    else
    {
        cout  <<  n  << "  is a prime number "  <<  endl  ;
    }
}