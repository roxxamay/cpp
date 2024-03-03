/**
 * @file ConditionAndLoopsFour.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program is designed to demonstrate conditional statements and how they can be used to make decisions based on user input. It starts by declaring an integer variable `a` and then prompts the user to enter a value for this variable using `cin`.

The program then uses an `if-else` statement to determine whether the value of `a` is positive, negative, or zero. Specifically, it first checks if `a` is greater than 0; if this condition is true, it prints "a is positive" to the console. If the condition is false, it then checks if `a` is less than 0 using an `else if` statement; if this new condition is true, it prints "a is negative". If neither condition is true, meaning `a` must be zero, the `else` block is executed, printing "a is zero".

This demonstrates a basic but important concept in programming: branching execution paths based on conditions. It shows how to use nested `if` statements and a more streamlined `if-else if-else` structure to handle multiple conditions efficiently. This kind of decision-making process is fundamental in creating programs that can respond differently based on various inputs or states.
 * @brief
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>
using namespace std;

int main(){
    int a ;
    cout << "enter the value of a " ;
    cin >> a ;

    // if(a>0) {
    //     cout << "a is positive " << endl;
    // }
    // else
    // {
    //     if(a<0) {
    //         cout << "a is negative " << endl ;
    //     }else {
    //             cout << "a is zero " << endl ;
    //         }
    // }

    if(a>0){
        cout << " a is positive" << endl ;
    }else if(a<0){
        cout << "a is negative" << endl ;
    }else{
        cout << "a is zero" << endl ;
    }
}
