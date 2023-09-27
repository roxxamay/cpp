/**
 * @file ExampleTwo.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief // C++ program to Demonstrate the  implementation of the base class  pointer pointing to derived class
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream" 
using namespace std ;

class BaseClass{
    public :
        int var_base ;

        void display(){
            cout << "displaying Base class" << "variable var_base : " << var_base << endl ;
        }
};

class DerivedClass : public BaseClass{
    public :
        int var_derived ;

    void display(){
        cout << "diplay Base class " << "variable var_base : " << var_base << endl ;

        cout << "displaying derived " << "class variable var_derived : " << var_derived << endl ;
    }
};

int main(){
    BaseClass *base_class_pointer ;
    BaseClass obj_base ;
    DerivedClass obj_derived ;

    //pointing to derived class

    base_class_pointer = &obj_derived ;

    base_class_pointer-> var_base = 34 ;

    // If you uncomment this line of code this will cause
    // the following error As base-class pointer cannot
    // access the derived class variable. 
    // base_class_pointer->var_derived = 98;
    // output: error: ‘class BaseClass’ has no member named
    // ‘var_derived’
 
    // Calling base class member function

    base_class_pointer -> display();

    base_class_pointer ->var_base = 3400 ;
    base_class_pointer->display();

    DerivedClass *derived_class_pointer ;
    derived_class_pointer = &obj_derived ;
    derived_class_pointer->var_base = 9448 ;
    derived_class_pointer->var_derived = 94 ;
    derived_class_pointer->display() ;

    return 0 ;
}