/**
 * @file whileLoop.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program is designed to print all non-negative integers up to a user-specified number. The program operates as follows:

1. It begins by including the `iostream` library to enable input and output operations and uses the standard namespace to simplify code syntax.

2. Within the `main` function, it declares an integer variable `n` to store the user's input.

3. The program prompts the user to enter a number and captures this input using `cin`.

4. It also declares an integer variable `i` but does not initialize it with a specific value. This is a mistake in the program, as using an uninitialized variable leads to undefined behavior. Ideally, `i` should be initialized to 0 for the loop to function as intended.

5. A `while` loop is used to iterate from `i` up to `n`, inclusive. During each iteration, the program prints the current value of `i` followed by a space.

6. The variable `i` is incremented by 1 in each iteration (`i++`) to ensure the loop progresses towards its termination condition.

7. The loop will continue executing as long as `i` is less than or equal to `n`, printing each integer on the same line.

The program intends to demonstrate basic loop functionality, specifically using a `while` loop for iteration. However, the omission of an initial value for `i` is a critical error, potentially causing unpredictable behavior. To correct this and ensure the program works as intended, `i` should be initialized to 0 (or any starting value desired) before the loop starts.
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
    cout << "enter a number : " ;
    cin >> n ;

    int i ;

    while(i<=n){
        cout << i << " " ;
        i++ ;
    }
}