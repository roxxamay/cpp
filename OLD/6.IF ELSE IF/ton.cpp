/*
 *  in this program we will try to understand the concept of if else if
 *  take a number as input and show the no is negative,positive or zero
 *AUTHOR:    @roxxamay
 *
 */

#include"iostream"

using namespace std;

int main()

{
    int a;

    cout  <<  "INPUT THE DESIRED NUMBER"  ;
    cin  >>  a  ;

    if(a>0)
    {
        cout  <<  "A IS A POSITIVE NUMBER"  <<  endl  ;
    }

    else if(a<0)
    {
        cout  <<  "A IS NEGATIVE"  <<  endl  ;
    }

    else
    {
        cout  <<  "A IS EQUALS TO ZERO"  <<  endl  ;
    }


}