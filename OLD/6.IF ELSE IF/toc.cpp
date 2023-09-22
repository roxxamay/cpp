/**
 * @file 3.cpp
 * @author @roxxamay
 * @brief  this programs determine the types of character
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
    char ch;
    cout <<  "ENTER THE CHARACTER "   ;
    cin >>  ch ;

    if(ch>='A'&&ch<='Z')
    {
        cout  <<  "THIS IS UPPER CASE"  << endl  ;
    }

    else if(ch>='a'&&ch<='z')
    {
        cout  <<  "this is lower case"  <<  endl  ;
    }

    else if(ch  >=  '0'  &&  ch  <=  '9')
    {
        cout  <<  "this is digit "  <<  endl  ;
    }
    return 0;


}