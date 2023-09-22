/**
 * @file check7.cpp
 * @author @roxxamay
 * @brief this program for checking output.
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;


int main()
{
    int a = 1 ;
    int b = a++ ;
    int c = ++a ;

    cout  <<  b  <<  endl  ;
    cout  <<  c  ;
}

/*
output

1
3


*/