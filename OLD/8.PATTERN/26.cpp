/**
 * @file 26.cpp
 * @author @roxxamay
 * @brief this is the 26th program of patterns
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

    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int space = n - i ;
        while( space )
        {
            cout << " ";
            space--;
        }
        // first trianlge
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }
        // second triangle

        int start = i - 1;

        while (start)
        {
            cout << start;
            start--;
        }
        cout  <<  endl  ;
        i++  ;
    }



}