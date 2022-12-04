/**
 * @file 1281_subosumprod.cpp
 * @author @roxxamay
 * @brief subtract the product and sum of the digit of an inreger
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
    int prod = 1 ;
    int sum = 0 ;

    cout  <<  "ENTER THE NUMBER : "  ;
    cin  >>  n  ;
    while( n != 0 )
    {
        int digit = n % 10 ;
        prod = prod * digit ;
        sum = sum + digit ;
        n = n / 10 ;
    }

    int answer = prod - sum ;

    cout  <<  "prod - sum = "  <<  answer  <<  endl  ;
    return 0 ;
}