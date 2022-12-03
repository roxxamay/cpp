/**
 * @file 16.cpp
 * @author @roxxamay
 * @brief this is 16th program of pattern
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
    char ch = 'A' ;
    cout  <<  "enter the number of lines : "  ;
    cin  >>  n  ;

    //calculation

    while( i <= n )
    {
        int j = 1  ;
        while( j <= n )
        {
            cout  <<  ch  <<  " "  ;
            j++ ;
            ch++ ;
        }
        cout  <<  endl  ;
        i++  ;
    }

}