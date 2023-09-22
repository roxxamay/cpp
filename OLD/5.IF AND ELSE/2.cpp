/*
 *  in this program we will input 2 number and see which one is greater.
 *
 *AUTHOR:    @roxxamay
 *
 */

#include"iostream"

using namespace std;

int main()
{
    int  a  ,  b;
    
    //we will take two integer

    cout  <<  "ENTER THE VALUE OF A : ";

    cin  >>  a  ;

    cout  <<  "ENTER THE VALUE OF B : ";

    cin  >>  b  ;

    //NOW WHICH ONE IS GREATER

    if(a>b)

    {
        cout  <<  "A IS GREATER THAN B"  <<  endl  ;
    }

    if(a<b)

    {
        cout  <<  "B IS GREATER THAN A"  <<  endl  ;
    }

    else
    {
        cout  <<  "A IS EQUAL TO B"  <<  endl  ;
    }


}