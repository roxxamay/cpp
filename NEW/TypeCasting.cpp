/**
 * @file TypeCasting.cpp
 * @author roxxamay
 * @brief 
 * @version 0.1
 * @date 2024-02-28
 * 
 * 
 */

#include<iostream>
using namespace std ;

int main(){
    
    int a  = 'a' ;
    cout << a << endl ;
    
    char ch = 98 ;
    cout << ch << endl ;

    //type cating exceed the limit
    char chOne = 123456 ;
    cout << chOne << endl ;

    /**
     * @brief TypeCasting.cpp: In function ‘int main()’:
TypeCasting.cpp:22:18: warning: overflow in conversion from ‘int’ to ‘char’ changes value from ‘123456’ to ‘64’ [-Woverflow]
   22 |     char chOne = 123456 ;
     *
     */

    //giving negative value to the unsigned int
    unsigned int u = -112 ;
    cout << u << endl ;
    /**
     * @brief Adding the line unsigned int u = -112; cout << u << endl; introduces an unsigned int type variable. Assigning a negative value to an unsigned integer type is not standard practice because unsigned integers are designed to store only non-negative values. When a negative value is assigned to an unsigned int, it causes integer wraparound, resulting in a large positive value according to the rules of unsigned arithmetic in C++. The specific value printed will depend on the size of unsigned int on the system where the program is run, typically resulting in the maximum value an unsigned int can hold minus 111 (due to the two's complement representation of integers in most computer systems).
     *
     */


    int c = 2/5 ;
    cout << c << endl ;

    float d = 2/5 ;
    cout << d << endl ;

    /**
     * @brief   Integer Division (int c = 2/5;): The first division operation is the same as before, where both the numerator     (2) and the denominator (5) are integers. Hence, this operation results in integer division, and since 2/5 is 0.4, the fractional part is discarded, resulting in 0. The variable c of type int is assigned this value, and 0 is printed to the console.

        Floating-point Division Stored in a Float (float d = 2/5;): The second operation might seem like it should produce a floating-point result because the variable d is of type float. However, the division 2/5 is still performed using integer arithmetic because both operands are integers. This results in 0, which is then implicitly converted to a floating-point number (0.0) when it is assigned to the variable d. Therefore, 0.0 is printed to the console, not 0.4 as might be expected if the division were performed in floating-point arithmetic.
     *
     */ 

}