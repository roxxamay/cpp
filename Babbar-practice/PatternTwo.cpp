/**
 * @file PatternTwo.cpp
 * @author Aditya Kumar (https://github.com/roxxamay/)
 * @brief
 *
 * This C++ program generates and prints a simple numeric pattern to the console. It includes a nested loop structure where the outer loop (`for(int i = 1 ; i <= 3 ; i++)`) controls the rows, and the inner loop (`for(int j = 1 ; j <= 3 ; j++)`) controls the columns of the pattern. For each iteration of the outer loop (each row), the inner loop iterates through its complete cycle, printing the values of `j` followed by two spaces. This results in a 3x3 grid where the numbers 1, 2, and 3 are printed in each row, resembling the following pattern:

```
1  2  3
1  2  3
1  2  3
```

However, due to an oversight in the description above, the actual output of the provided code will be:

```
1  2  3
1  2  3
1  2  3
```

The program makes use of standard C++ libraries and practices. It employs the `iostream` library for input and output operations, and utilizes the `cout` object to display the pattern to the console. The `using namespace std;` directive is used to avoid the necessity of prefixing standard library names with `std::`. The code structure is simple and straightforward, making it accessible for beginners to understand basic looping constructs in C++.
 * @version 0.1
 * @date 2024-03-17
 *
 * @copyright Copyright (c) 2024
 *
 */

#include"iostream"
using namespace std ;

int main(){
    for(int i = 1 ; i <= 3 ; i++){
        for(int j = 1 ; j <= 3 ; j++){
            cout << j  << "  "  ;
        }
        cout << endl ;
    }
}