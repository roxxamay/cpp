/**
 * @file reverse.cpp
 * @author @roxxamay
 * @brief to reverse a integer
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int rem , num ;

    cout  <<  "enter the number : "  ;
    cin  >>  num  ;

    while( num > 0 )
    {
        rem = num % 10 ;
        num = num / 10 ;

        cout  <<  rem ;
    }
    cout  <<  " is the reverse number"  ;
}