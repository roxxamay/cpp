/**
 * @file PatternOne.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @briefThis C++ program is designed to print a square pattern of asterisks (`*`) based on a user-specified size. The program operates as follows:

1. **User Input:** It starts by declaring an integer variable `n` and prompts the user to enter the number of lines they want in the pattern. This number also determines the size of the square, as the program will print `n` asterisks on each of `n` lines.

2. **Pattern Generation:** The program uses two nested `while` loops to generate the pattern:
   - The outer loop iterates from 1 to `n`, with each iteration corresponding to a new line in the output.
   - The inner loop iterates from 1 to `n` as well, and during each iteration, it prints an asterisk (`*`) without a newline character. This loop is responsible for printing a row of `n` asterisks.
   - After the inner loop completes (i.e., after printing `n` asterisks on a line), the program prints a newline character (`endl`) to move to the next line.

3. **Output:** The result is a square of asterisks that has `n` rows and `n` columns. For example, if the user enters `3`, the program prints a 3x3 square of asterisks.

This program effectively demonstrates the use of nested loops for generating patterns and handling user input. It's a basic example of how simple algorithms can produce visual outputs in console applications.
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 *                      ********
                        ********
                        ********
                        ********
                        ********
                        ********
                        ********
                        ********

 *
 */

#include<iostream>
using namespace std ;

int main(){
    int n ;

    cout << "enter the required line number : " ;
    cin >> n ;

    int i = 1 ;
    while(i<=n){
        int j = 1 ;
        while(j<=n){
            cout << "*" ;
            j++ ;
        }
        i++ ;
        cout << endl ;
    }
}