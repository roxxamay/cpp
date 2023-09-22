/**
 * @file check3.cpp
 * @author @roxxamay
 * @brief checking the output of the program
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    for( int i = 0 ; i <= 15 ; i+=2)
    {
        cout  <<  i  << " "  ;
        if( i & 1 )
        {
            continue;
        }
        i++ ;
    }
}

/*
OUTPUT  

0 3 5 7 9 11 13 15 

*/