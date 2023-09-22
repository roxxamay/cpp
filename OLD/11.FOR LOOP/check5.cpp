/**
 * @file check5.cpp
 * @author @roxxamay
 * @brief checing the output of the program
 * @version 0.1
 * @date 2022-12-04
 * 
 * 
 */

#include "iostream"
using namespace std ;

int main()
{
    for( int i = 1 ; i <= 5 ; i++ )
    {
        for ( int j = i; j <= 5 ; j++)
        {
            if( i + j == 10 )
            {
                break; 
            }
        }

        cout  <<  i   <<  " "  <<  j  <<  endl  ;
        
    }
}

/*
output

check5.cpp: In function 'int main()':
check5.cpp:26:36: error: 'j' was not declared in this scope
   26 |         cout  <<  i   <<  " "  <<  j  <<  endl  ;
      |                
      
*/