/**
 * @file 27.cpp
 * @author @roxxamay
 * @brief this is the 27th pattern program
 * @version 0.1
 * @date 2022-12-03
 * 
 * 
 */

#include "iostream"

using namespace std ;

int main()
{
    int n , i = 1 ;

    cout  <<  "enter the number of lines : "  ;
    cin  >>  n ;

    while( i <= n )
    {
        int j = 1 ;
        while( j <= n - i + 1)
        {
            cout  <<  j  <<  "  "  ;
            j++ ;
        }


        int starone = n - ( i - 2 ) ;
        while( starone <= n )
        {
            cout  <<  "*"  <<  "  " ;
            starone  ++ ;
        }


        int startwo = n - ( i - 2 ) ;
        while( startwo <= n )
        {
            cout  << "*"  <<  "  "  ;
            startwo++ ;
        }

        int k = n - i + 1;
        while (k >= 1)
        {
            cout << k << "  ";
            k--;
        }

        cout  <<  endl  ;
        i++ ;
    }
}