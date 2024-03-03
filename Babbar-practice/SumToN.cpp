/**
 * @file SumToN.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This corrected C++ program calculates the sum of all integers from 1 up to a user-specified number `n`. It works as follows:

1. **Initialization:** The program begins by declaring three integer variables: `n`, which will store the user's input; `sum`, initialized to 0 to accumulate the sum of integers; and `i`, initialized to 1 to serve as a counter in the loop.

2. **User Input:** It prompts the user to enter a number (`n`) and captures this input using `cin`.

3. **Calculation Loop:** A `while` loop is used to iterate from 1 to `n`. In each iteration, it adds the value of `i` to `sum`. The counter `i` is then incremented by 1, ensuring that each integer from 1 up to `n` is included in the sum.

4. **Output:** Once the loop completes (i.e., when `i` exceeds `n`), the program prints the calculated sum to the console.

This program effectively demonstrates the use of a `while` loop for iterative calculation, accumulating a sum over a sequence of numbers. It is a simple yet practical example of basic arithmetic operations, loop control structures, and user input handling in C++.
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include<iostream>
using namespace std ;

int main(){
    int n ;
    int sum = 0 ;
    int i = 1 ;
    cout << "enter the required number : " ;
    cin >> n ;

    while( i <= n ){
        sum=sum+i ;
        i++ ;
    }
    cout << "sum = " << sum ;
}