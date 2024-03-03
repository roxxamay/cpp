/**
 * @file FToC.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program is designed to convert a temperature from Fahrenheit to Celsius. The process followed by the program is straightforward and consists of the following steps:

1. **Variable Declaration:** It begins by declaring two `float` variables, `f` for storing the temperature in Fahrenheit and `c` for storing the converted temperature in Celsius.

2. **User Input:** The program prompts the user to enter a temperature in Fahrenheit. This is done using `cout` and the input is captured using `cin >> f;`.

3. **Conversion:** The entered Fahrenheit temperature is converted to Celsius using the formula `c = (f - 32) * 5/9;`. This formula subtracts 32 from the Fahrenheit temperature, then multiplies the result by \(\frac{5}{9}\) to convert it to Celsius.

4. **Output:** Finally, the program prints the converted temperature in Celsius using `cout`, displaying the result to the user.

This program demonstrates basic input/output operations in C++, as well as how to perform arithmetic calculations using variables. It provides a practical example of applying a mathematical formula within a programming context to solve a common problem—temperature conversion.
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>
using namespace std ;

int main(){
    float f ;
    float c ;

    cout << "enter degree in Fahrenheit : " ;
    cin >> f ;

    //conversion
    c = ( f - 32 ) * 5/9 ;

    //printing
    cout << "temperature in celsius : "  << c << endl ;
}