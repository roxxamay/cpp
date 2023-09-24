#include "iostream" 
using namespace std ;

class Base{
    public : 
            Base(){cout << "Non Param Base " << endl ;}
            Base(int  x ){cout << "param of base" << endl ;}

};

class Derived : public Base{
    public : 
            Derived(){cout << "non param Derived " << endl ;}
            Derived(int y){cout << "param of  derived " << y <<endl ;}

            Derived(int x ,int y ):Base(x){
                cout << "param of derived "<< y << endl;
            }
};

int main(){
    Derived d(5 , 6) ;

}