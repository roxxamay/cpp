/**
 * @file numbercomplement.cpp
 * @author @roxxamay
 * @brief this program lets you to find the complement of the number 
 * @version 0.1
 * @date 2022-12-06
 * 
 * 
 */

#include "iostream"
#include "math.h"

using namespace std ;

int main()
{
    int ans = 0;
    int i = 0;
    int n;


    cout << "enter the value of n : ";
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        i++;

        n = n >> 1;
    }

    int result =( ans^pow(2,i) - 1)  ;


}