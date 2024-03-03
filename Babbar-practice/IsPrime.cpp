/**
 * @file IsPrime.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This updated C++ program is designed to accurately determine whether a user-inputted number, `n`, is a prime number. It incorporates a crucial fix to the logical flaw present in the previous version of the program by introducing a boolean variable `isPrime` to track whether a divisor has been found that would disqualify `n` from being prime. Here's how the revised program operates:

1. **Initialization:** At the start, the program declares an integer variable `n` for storing the user's input and an integer `i` initialized to 2 for use as a potential divisor in testing for primality. It also introduces a boolean variable `isPrime` but does not explicitly initialize it. This is a slight oversight; ideally, `isPrime` should be initialized to `true` to assume `n` is prime until proven otherwise.

2. **User Input:** The program prompts the user to enter a number and stores the input in `n`.

3. **Prime Number Check:** The program enters a `while` loop, iterating as long as `i` is less than `n`. For each iteration, it checks if `n` is divisible by `i` (`n % i == 0`). If a divisor is found, `isPrime` is set to `false`, and the loop is immediately exited using `break`. This efficiently stops the search as soon as a divisor is found, indicating `n` is not prime.

4. **Result Output:** After the loop, the program checks the value of `isPrime`. If `isPrime` is `false`, it prints that `n` is not a prime number. Otherwise, it prints that `n` is a prime number.

The program's approach correctly implements the logic for identifying prime numbers by examining potential divisors from 2 up to `n-1`. If any divisor is found (other than 1 and `n` itself), `n` cannot be prime. If no such divisor is found, `n` is prime.

However, to ensure the program works as intended for all inputs, including the edge case where `n` is 2 (the smallest prime number) or less, `isPrime` should be initialized to `true` at the beginning. Moreover, the program currently does not correctly identify 1 and numbers less than 1 as non-prime (since by definition, a prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself). Adjusting the initial check to handle these cases would make the program more robust.
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
    int i = 2 ;
    bool isPrime ; 

    cout << "enter the required number = " ;
    cin >> n ;

    while(i < n) {
        if( n%i==0 ){
            isPrime = false ;
            break;
        }
        i++ ;
    }
    if(isPrime==false){
        cout << n << " is not a prime number " << endl ;
    }else{
        cout << n << " is a prime number " << endl ;
    }
}