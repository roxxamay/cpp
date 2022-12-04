/**
 * @file check2.cpp
 * @author @roxxamay
 * @brief this is the program for checking the output 
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    for(int i = 0 ; i <= 5 ; i-- )
    {
        cout  <<  i  <<  " "  ;
        i++  ;
    }
}

/*

OUTPUT

000000000000000000000000000000000000000...................( INFINITE LOOP )
*/