/**
 * @file ExampleOne.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream"

using namespace std ;

class Base{
    public :
        void funOne(){
            cout << "fun one of base class" ;

        }
};

class Derived : public Base {
    public :
        void funTwo(){
            cout << "\n fun two of derived class" ;
        }
};

int main()
{
    Base *p ;
    p = new Derived();

    p->funOne();
    //p->funTwo();          it can only access class base

    cout << "\n--------------------------------------------------------------------" << endl ;

    Derived d;
    Base *ptr = &d;

    ptr->funOne();
    //ptr->funTwo();            //it cant access it

    cout << "\n--------------------------------------------------------------------" << endl ;

    Base b;
    Derived *pt = &b ;

    // pt->funOne() ;
    // pt->funTwo();        // cant access it

    return 0;
}