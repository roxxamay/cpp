/**
 * @file Character.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program is designed to demonstrate the use of conditional statements to categorize a single character input by the user into one of four categories: lowercase letters, uppercase letters, numeric digits, or special characters. The program achieves this by utilizing the ASCII values associated with different characters.

First, the program includes the `iostream` library to facilitate input and output operations and declares the use of the standard namespace to avoid prefixing standard library names with `std::`.

The `main` function starts by declaring a variable `ch` of type `char` to store the user's input. It then prompts the user to enter a character and captures this input using `cin`.

The program uses a series of `if-else if-else` statements to determine the category of the entered character based on its ASCII value:

1. The first condition checks if `ch` is between 'a' and 'z', inclusive, which corresponds to lowercase letters in the ASCII table. If true, it prints that the character is lowercase.
2. The second condition checks if `ch` is between 65 and 90, inclusive, which are the ASCII values for 'A' and 'Z', respectively. This condition could be made more readable by using character literals ('A' and 'Z') instead of their ASCII values. If true, it prints that the character is uppercase.
3. The third condition checks if `ch` is between 48 and 57, inclusive, which are the ASCII values for '0' and '9', respectively. This condition could also be made more readable by using character literals ('0' and '9'). If true, it prints that the character is numeric.
4. If none of the above conditions are true, the program concludes that the character is a special character and prints this information.

This program illustrates the use of ASCII values for character classification and demonstrates basic conditional logic in C++. However, for clarity and better readability, it's generally recommended to use character literals ('A', 'Z', '0', '9') instead of their ASCII numeric values when making such comparisons.
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>
using namespace std ;

int main(){
    char ch ;
    cout << "enter the character : " ;
    cin >> ch ;

    if(ch >= 'a' && ch <='z'){
        cout << "entered character is lower case " << endl ;
    }else if( ch >= 65 && ch <= 90){
        cout << "entered character is captial case" << endl ;
    }else if( ch >= 48 && ch <= 57){
        cout << "entered character is numeric " << endl ;
    }else{
        cout << "eneterd character is a special character" << endl ;
    }
}