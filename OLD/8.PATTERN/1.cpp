/**
 * @file 1.cpp
 * @author @roxxamay
 * @brief printing pattern
 * @version 0.1
 * @date 2022-11-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include"iostream"

using namespace std;

int main()
{
    int i = 1 , n;

    cout  <<  "ENTER THE NUMBER OF LINES "  ;
    cin  >>  n  ;

    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout  <<  "*" ;
            j = j + 1;
        }
        cout  <<  endl  ;
        i = i + 1 ;
    }
}