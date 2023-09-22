/**
 * @file decimaltobinary.cpp
 * @author @roxxamay
 * @brief a program for conversing the decimal into binary
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int num , bin[32] ,x = 0 ;
    
    cout  << "enter the value in decimal : " ;
    cin  >> num  ;

    while( num > 0 )
    {
        bin[x] = num % 2 ;
        num  = num / 2 ;
        x++ ;
    }

    //now printing the value

    for( int j = x - 1  ; j >= 0 ; j -- )
    {
        cout  << bin[j]  ;
    }
    return 0 ;

}