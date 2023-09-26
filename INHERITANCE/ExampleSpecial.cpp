/**
 * @file ExampleSpecial.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief C++ program demonstrating ambiguity in Multipath Inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream" 
using namespace std ;

class ClassA{
    public :
        int a ;
};

class ClassB : public ClassA{
    public :
        int b ;
};

class ClassC : public ClassA{
    public :
        int c ;
};

class ClassD : public ClassA , public ClassB , public ClassC {

    public :
    int d ;
};

int main(){
    ClassD obj ;

    obj.ClassB::a = 10 ;
    obj.ClassC::a = 100 ;

    obj.b = 20 ;
    obj.c = 30 ;
    obj.d = 40 ;

    cout << "a from classB :  " << obj.ClassB :: a ;
    cout << "\n a from classC : " << obj.ClassC :: a ;

    cout << "\n b : " << obj.b ;
    cout << "\n d : " << obj.c ;
    cout << "\n d : " << obj.d << endl ;
}