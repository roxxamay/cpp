/*
*THIS PROGRAMS ID ALL ABOUT PRACTiCeSING ABOUT DATA TYPES AND VARIABLES.
*
*AUTHOR: @roxxamay
*
*/
#include<iostream>
using namespace std;

int  main()
{
    int a;
    char b;
    float c;
    double d;
    bool e;

    //CHECKING THE SIZE THAT THE VARIABLE HAD OCCUPIED


    cout  <<  "size of (a) i.e integer is "  <<  sizeof(a)  <<  endl;

    cout  <<  "size of (b) i.e character is "  <<  sizeof(b)  <<  endl;

    cout  <<  "size of (c) i.e float is "  << sizeof(c)  <<  endl;

    cout  <<  "size of (d) i.e. double is "  <<  sizeof(d)  << endl;

    cout  <<  "size of (e) i.e. bool is "  <<  sizeof(e)  <<  endl;

    //NOW CHECKING THE SIZE BY DIRECTLY INPUTING THE NAME OF DATATYPES

    cout  <<  "sizeof(int)="  <<  sizeof(int)  <<  endl;

    cout  <<  "sizeof(char)="  <<  sizeof(char)  <<  endl;

    cout  <<  "sizeof(float)="  <<  sizeof(float)  <<  endl;

    cout  <<  "sizeof(double)="  <<  sizeof(double)  <<  endl;

    cout  <<  "sizeof(bool)="  <<  sizeof(bool)  <<  endl;

    //NOW CHECKING THE VALUE OBY DIRECTLY INPUTING THE VALUE OF DIFFERNT DATATYPES

    cout  << "sizeof(10)="  <<  sizeof(10)  <<  endl;

    cout  <<  "sizeof('x')="  <<  sizeof('a')  <<  endl;

    cout  <<  "sizeof(10.457)="  <<  sizeof(10.457)  <<  endl;

    cout  <<  "sizeof(true)="  <<  sizeof(true)  <<  endl;

    cout  <<  "sizeof(10.4e5)="  <<  sizeof(10.4e5)  <<  endl;


}