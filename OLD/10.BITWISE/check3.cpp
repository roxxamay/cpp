/**
 * @file check3.cpp
 * @author @roxxamay
 * @brief this program is for checking the output
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int a , b = 1 ;
    a = 10 ;

    if( ++a )
    {
        cout  <<  b  ;
    }
    else
    {
        cout  <<  ++b  ;
    }

    return 0 ;
}

/*

>>THE OUTPUTS IS

1

*/