/**
 * @file 191_nooonebits.cpp
 * @author @roxxamay
 * @brief  write a program that takes an unsigned integer and returns the
 *          numbers of 1 bits .it is also known as hamming weight
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int32_t n ;
    int count = 0 ;
    
    cout  <<  "enter the integer : "  ;
    cin  >>  n  ;

    while( n != 0 )
    {
        if( n & 1 )
        {
            count++ ;
        }
        n = n >> 1 ;
    }

    cout  <<  "no of 1 bits is "  <<  count  <<  endl  ;

    return 0 ;

}