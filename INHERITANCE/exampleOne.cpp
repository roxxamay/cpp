/**
 * @file exampleOne.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief example related to the inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream" 

using namespace std ;

class A{
    protected :
        int a ;

    public :
        void set_A(){
            cout << "enter the value of A = " ;
            cin >> a;
        }

        void disp_A(){
            cout << endl <<"value of A = " << a ;
        }
};

class B : public A{
    int b ,p ;

    public :
        void set_B(){
            set_A();
            cout << "enter the value of b = " ;
            cin >> b ;
        }

        void disp_B(){
            disp_A();
            cout << endl << "value of b " << b;
        }

        void cal_product(){
            p= a * b ;
            cout << endl << "product of " << a <<" and " << b << " is " << p ;
        }
};

int main(){
    B _b ;
    _b.set_B();
    _b.cal_product() ;

    return 0 ;
}