/**
 * @file SumToNEven.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program calculates the sum of all even numbers up to and including a user-specified number `n`. The program operates as follows:

1. **Initialization:** It starts by declaring three integer variables:
   - `n`, which will hold the user's input.
   - `sum`, initialized to 0, which will accumulate the sum of even numbers.
   - `i`, initialized to 2, which is used as the counter in the loop. Starting at 2 ensures that the loop only considers even numbers.

2. **User Input:** The program prompts the user to enter a number (`n`) and captures this input using `cin`.

3. **Sum Calculation Loop:** A `while` loop is used to iterate through even numbers from 2 up to `n`. Within the loop:
   - The current value of `i` (which is always an even number) is added to `sum`.
   - The counter `i` is then incremented by 2 on each iteration, ensuring that only even numbers are considered.

4. **Output:** After the loop completes (i.e., when `i` becomes greater than `n`), the program prints the calculated sum of even numbers up to `n`.

This program demonstrates how to use a `while` loop for conditional iteration and accumulation in C++. It specifically showcases how to calculate a sum with a particular condition (in this case, summing only even numbers) by manipulating the loop counter in a way that only relevant values are considered during the loop's execution.
 * @version 0.1
 * @date 2024-03-04
 *
 * @copyright Copyright (c) 2024
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    int i = 2;
    cout << "enter the required number : ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i=i+2;
    }
    cout << "sum of even number to N = " << sum;
}