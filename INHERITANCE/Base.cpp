#include <iostream>

using namespace std ;

class Base{
    public : 
            int x ;

            void display(){
                cout << x ;
            }
};

class Derived:public Base{
    public : 
            int y ;

            void show(){
                cout << x << "  " << y ;
            }
};

int main(){
    Base b ;
    b.x = 25 ;

    b.display();
    cout << endl ;
    Derived d ;

    d.x = 69 ;

    d.y = 56 ;

    d.show();
}