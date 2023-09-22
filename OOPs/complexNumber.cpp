#include "iostream"

using namespace std ;

class complex{

    public :
        int real ;
        int img ;

    public :
        complex(int r = 0 , int i = 0 ){
            real = r ; 
            img = i ;
        }

        complex add(complex x ){
            complex temp ;

            temp.real = real + x.real ;
            temp.img = img + x.img ;

            return temp ;
        }
    
} ;

int main(){
    complex c1(3,7) ;
    complex c2(5 , 4) ;

    complex c3 ;

    c3 = c1.add(c2) ;

    cout << c3.real << " +i " << c3.img << endl ;
}