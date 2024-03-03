/**
 * @file RelationalOperators.cpp
 * @author roxxamay
 * @brief This C++ program snippet demonstrates the use of relational operators by comparing two integer variables, `a` and `b`, with values `2` and `3`, respectively. It evaluates and prints the results of six different relational expressions:

1. **Equality (`a == b`)**: Checks if `a` is equal to `b`. Since `a` is not equal to `b`, the expression evaluates to `false` and prints `0`.

2. **Greater Than (`a > b`)**: Checks if `a` is greater than `b`. Since `a` is less than `b`, the expression evaluates to `false` and prints `0`.

3. **Less Than (`a < b`)**: Checks if `a` is less than `b`. Since `a` is indeed less than `b`, the expression evaluates to `true` and prints `1`.

4. **Greater Than or Equal To (`a >= b`)**: Checks if `a` is greater than or equal to `b`. Since `a` is less than `b`, the expression evaluates to `false` and prints `0`.

5. **Less Than or Equal To (`a <= b`)**: Checks if `a` is less than or equal to `b`. Since `a` is less than `b`, this is `true`, and it prints `1`.

6. **Not Equal To (`a != b`)**: Checks if `a` is not equal to `b`. Since `a` and `b` are indeed not equal, the expression evaluates to `true` and prints `1`.

This program effectively illustrates how relational operators are used in C++ to compare values and make decisions based on those comparisons. The output of each relational operation is a boolean value (`true` or `false`), represented in C++ as `1` for `true` and `0` for `false`, indicating the result of each comparison.
 * @version 0.1
 * @date 2024-02-28
 *
 *
 */

#include<iostream>
using namespace std ;

int main(){

    int a = 2 ;
    int b = 3 ;

    bool first = (a==b) ;
    cout << first << endl ;

    bool second = (a > b);
    cout << second << endl;

    bool  third = (a < b);
    cout << third << endl;

    bool fourth = (a >= b);
    cout << fourth << endl;

    bool  fifth = (a <= b);
    cout <<  fifth << endl;

    bool  sixth = (a != b);
    cout << sixth << endl;

}