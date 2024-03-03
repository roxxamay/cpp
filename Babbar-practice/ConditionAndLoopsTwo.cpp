/**
 * @file ConditionAndLoopsTwo.cpp
 * @author ADITYA KUMAR (https://github.com/roxxamay/)
 * @brief The given code snippet is another C++ program that demonstrates how to read two integer values from the user and also attempts to use `cin.get()` to read another value. Here's a breakdown of its components:

- **`int main(){...}`**: Defines the main function that serves as the entry point for the program.

- **`int a, b;`**: Declares two integer variables, `a` and `b`, to store the user's input.

- **`cout << "Enter two numbers : ";`**: Uses the `cout` object to print a message prompting the user to enter two numbers.

- **`cin >> a >> b;`**: Reads two integers from the standard input (typically the console) using the `cin` object and assigns them to the variables `a` and `b` respectively.

- **`cout << "value of a and b is " << a << "  " << b << endl;`**: Prints the values of `a` and `b` to the standard output, followed by a newline.

- **`int c;`**: Declares another integer variable `c` to store the value read by `cin.get()`.

- **`c = cin.get();`**: `cin.get()` is used to read the next character from the standard input. However, it's important to note that `cin.get()` returns a character, and here it is being assigned to an integer variable `c`. This will result in storing the ASCII value of the character read into `c`. If there's no character to be read or if the next character is a newline character (which is likely in this case because the user pressed enter after inputting `b`), `cin.get()` will capture that.

- **`cout << "value of c is " << c << endl;`**: Prints the value of `c` to the standard output, which would be the ASCII value of the character read by `cin.get()`, followed by a newline.

A key thing to note about this program is the use of `cin.get()` after reading `a` and `b` with `cin >>`. The `cin >>` operator leaves the newline character in the input buffer when the user presses enter, so the subsequent `cin.get()` call is likely to read this newline character. As a result, the output for `c` will likely be the ASCII value of the newline character (typically 10 on most platforms). This might not be the intended behavior, especially if expecting to read another numeric input directly from the user.
 * @version 0.1
 * @date 2024-03-03
 *
 *
 */

#include <iostream>
using namespace std;

int main()
{
       int a, b;
       cout << "Enter two numbers : ";
       cin >> a >> b;
       cout << "value of a and b is " << a << "  " << b << endl;

       int c;
       c = cin.get();
       cout << "value of c is " << c << endl;
}