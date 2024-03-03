/**
 * @file ConditionAndLoops.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief The provided code snippet is a simple C++ program that checks whether a given integer is positive or negative. Here's a brief explanation of its components:

- **`int main(){...}`**: This is the main function from which execution of the program starts. It's the entry point of many C++ programs.

- **`int a;`**: Declares an integer variable named `a` to store the user's input.

- **`cout << "enter the value of a : ";`**: Uses the `cout` object to print a message to the standard output (typically the console) prompting the user to enter the value of `a`.

- **`cin >> a;`**: Uses the `cin` object to read the value entered by the user from the standard input and stores it in variable `a`.

- **`if (a > 0){...}`**: An `if` statement that checks if `a` is greater than 0. If this condition is true, it means `a` is positive.

    - **`cout << "a is positive" << endl;`**: If `a` is positive, this line prints "a is positive" to the standard output and then moves to a new line (`endl`).

- **`else {...}`**: The `else` block is executed if the condition in the `if` statement (`a > 0`) is false, meaning `a` is not greater than 0.

    - **`cout << "a is negative" << endl;`**: If `a` is not positive (which, in this simple scenario, implicitly means it is negative or zero), this line prints "a is negative" to the standard output and then moves to a new line. Note that according to this code, zero is also considered as negative, which might not be the intended logic.

This program does not explicitly handle the case where `a` is zero, which is typically considered neither positive nor negative. To improve this program, you could add an additional condition to check for zero and print an appropriate message.
 * @version 0.1
 * @date 2024-03-03
 *
 *
 */

#include<iostream>
using namespace std ;

int main(){
    int a ;
    cout << "enter the value of a : " ;
    cin >> a ;

    if (a > 0 ){
        cout << "a is positive" << endl ;
    }else
    {
        cout << "a is negative" << endl ;
    }
}