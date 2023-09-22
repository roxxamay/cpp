/**
 * @file check1.cpp
 * @author @roxxamay
 * @brief this program is for checking the output
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int a = 4 ;
    int b = 6 ;

    cout  << "a & b = "  <<  ( a & b )  <<  endl  ;
    cout  << "a | b = " << (a | b) << endl;
    cout  << " ~ a = " << (~a) << endl;
    cout  << "a ^ b = " << (a ^ b) << endl;

    return 0 ;
}

/*

OUTPUTS ARE AS FOLLOWS


a & b = 4
a | b = 6
 ~ a = -5
a ^ b = 2

*/