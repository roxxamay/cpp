/**
 * @file check5.cpp
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
    int a = 1 ;
    int b = 2 ;

    if( a-- > 0 || ++b > 2 )
    {
        ++b ;
        cout  <<  " stage 1 - inside if "  ;
    }

    else
    {
        cout  <<  "stage 2 - inside else " ;
    }

    cout  <<  a  <<  " "  << b << endl  ;

    return 0 ;
}

/*
OUTPUT ARE

 stage 1 - inside if 0 3

 */