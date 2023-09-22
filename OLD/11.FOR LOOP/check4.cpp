/**
 * @file check4.cpp
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
    for( int i = 0 ; i < 5 ; i++ )
    {
        for( int j = 1 ; j <= 5 ; j++ )
        {
            cout  <<  i  <<  " "  <<  j  <<  endl  ;
        }
    }
}

/*

OUTPUT : 

0 1
0 2
0 3
0 4
0 5
1 1
1 2
1 3
1 4
1 5
2 1
2 2
2 3
2 4
2 5
3 1
3 2
3 3
3 4
3 5
4 1
4 2
4 3
4 4
4 5


*/