/**
 * @file OutputTwo.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program demonstrates the use of conditional statements (`if`, `else if`, and `else`) to control the flow of execution based on the value of a variable. The program includes the `iostream` library for input and output operations and uses the standard namespace.

In the `main` function, an integer variable `a` is declared and initialized with the value 24. The program then checks the value of `a` against a series of conditions to determine what to print to the console.

First, it checks if `a` is greater than 20. Since `a` is 24, which is indeed greater than 20, the condition is true, and "Love" is printed to the console. Due to the nature of `if-else if-else` statements, once a true condition is found and its block is executed, the program does not check subsequent conditions. This means the `else if` condition (`a == 24`) and the `else` block are skipped, even though `a` is equal to 24, which would make the `else if` condition also true if evaluated independently.

After executing the `if` block, the program continues to the next statement, which prints the value of `a` (24) to the console.

Therefore, the output of this program is "Love24". This demonstrates how conditional statements are executed sequentially and how the first true condition encountered determines the block of code that is executed, with subsequent conditions being ignored.
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>
using namespace std ;

int main(){
    int a = 24 ;

    if(a > 20){
        cout << "Love" ;
    }
    else if( a == 24){
        cout << "lovely" ;
    }else{
        cout << "babbar" ;
    }
    cout << a ;
}