/**
 * @file OutputOne.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief This C++ program demonstrates an important concept related to assignment within a conditional expression and how it affects program flow and variable values. The program starts by including the iostream library and using the standard namespace to simplify the code.

The main function begins by declaring two integer variables, a and b. a is initially assigned the value 2, and b is assigned the value of a + 1, which makes b equal to 3.

Next, the program evaluates an if statement with a condition that includes an assignment: (a=3)==b. Here, a is assigned the value 3, and immediately after this assignment, it's checked whether a is equal to b. Since both a and b are equal to 3 after the assignment, the condition evaluates to true.

Because the condition is true, the program executes the if block, printing the value of a, which is now 3 due to the assignment in the conditional expression.

The key takeaway from this program is understanding how an assignment operation within a conditional expression not only affects the flow of the program but also changes the value of the variable involved. This program also highlights the importance of being cautious when using assignment operators within conditions, as it can lead to unexpected behavior or side effects if not used intentionally.
 * @version 0.1
 * @date 2024-03-03
 *
 * @copyright Copyright (c) 2024
 *
 */
#include<iostream>
using namespace std ;
int main(){
    int a = 2 ;
    int b = a + 1 ;

    if( (a=3)==b){
        cout << a ;
    }
    else
    {
        cout << a+1 ;
    }
}