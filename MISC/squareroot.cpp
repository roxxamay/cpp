/**
 * @file squareroot.cpp
 * @author @roxxamay
 * @brief this program is used for finding square root of any number.
 * @version 0.1
 * @date 2022-12-06
 * 
 * 
 */

#include "iostream"
#include "math.h"

using namespace std ;

int main()
{
    float n , x ;

    cout  <<  "enter the number : "  ;

    cin  >>  n  ;

    //calculation  

    x = sqrt( n )  ;

    cout   <<  "hence the required root is  "  <<  x  ;
}