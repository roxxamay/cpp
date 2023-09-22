/**
 * @file decimaltobinaryaltier.cpp
 * @author @roxxamay
 * @brief this is the program for converting the decimal to binary (altier method)
 * @version 0.1
 * @date 2022-12-05
 * 
 * 
 */

#include "iostream"
#include "math.h"

using namespace std ;

int main()
{
    int ans = 0 ;
    int i = 0 ;
    int n ;

    cout  <<  "enter the value of n : "  ;
    cin  >>  n ;

    while(n != 0)
    {
        int bit = n & 1 ;

        ans = ( bit * pow( 10 , i) ) + ans  ;

        i++ ;

        n = n >> 1 ;

    }

    cout <<  "the number in binary is "  <<  ans ;
    return 0 ;
    
}