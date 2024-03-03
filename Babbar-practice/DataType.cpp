/**
 * @file two.cpp
 * @author roxxamay
 * @brief This C++ program demonstrates the basic use and display of different data types in C++, as well as how to determine and display the size of these data types in bytes. The program includes examples of the following data types:

1. `int` (Integer): Used to store whole numbers.
2. `char` (Character): Used to store single characters.
3. `bool` (Boolean): Used to store truth values (`true` or `false`).
4. `float`: Used to store floating-point numbers with single precision.
5. `double`: Used to store floating-point numbers with double precision.

For each data type, the program initializes a variable with a specific value, prints this value to the console, and then calculates and prints the size of the variable in bytes using the `sizeof` operator. The size information helps in understanding the amount of memory each data type requires.

The program uses basic C++ syntax and is structured with the use of the `iostream` library for input/output operations and the `using namespace std;` directive to avoid the necessity of prefixing standard library names with `std::`.

Overall, this program serves as an introductory tutorial for beginners to understand different data types in C++, their usage, and how to determine their memory size, which is fundamental for efficient memory management in programming.
 * @version 0.1
 * @date 2024-02-24
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>

using namespace std ;

int main(){

    //int
    int a = 123 ;

    cout << a << endl ;

    //char
    char b = 'v' ;

    cout << b << endl ;

    //bool    
    bool bi = true ;

    cout << bi << endl ;

    //float
    float f = 1.2 ;

    cout << f << endl ;

    //double
    double d = 1.23435 ;

    cout << d << endl ;

    //int size
    int sizeInt = sizeof(a) ;

    cout << "size of a is : " << sizeInt << endl ;

    // chaer size
    int sizeChar = sizeof(b);

    cout << "size of a is : " << sizeChar << endl ;

    // bool size
    int sizeBool = sizeof(bi);

    cout << "size of a is : " << sizeBool << endl;

    // float size
    int sizeFloat = sizeof(f);

    cout << "size of a is : " << sizeFloat << endl ;

    // double size
    int sizeDouble = sizeof(d);
    cout << "size of a is : " << sizeDouble << endl ;
}