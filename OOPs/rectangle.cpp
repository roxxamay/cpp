#include "iostream"

using namespace std ;

class rectangle{
    public:
        int length ;
        int breadth ;

        int area(){
            return (length * breadth) ;
        }

        int  perimeter(){
            return (2* (length + breadth)) ;
        }
};

int main(){
    rectangle r1 , r2 ;

    r1.length = 2 ;
    r1.breadth = 15 ;

    cout << "area = " << r1.area()  << endl;
    cout <<"perimeter = " << r1.perimeter() << endl ;

    r2.length = 12 ;
    r2.breadth = 27 ;

    cout << "area = " << r2.area()  << endl;
    cout <<"perimeter = " << r2.perimeter() << endl ;

    
}