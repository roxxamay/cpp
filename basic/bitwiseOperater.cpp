#include "iostream" 

using namespace std ;

int main(){
    int x = 55 , y = 32 ;

    int z = x & y ;

    cout << " & : " << z << endl ;

    z = x | y ;

    cout << " | : " << z << endl ;

    z = x^y ;

    cout << " ^ : " << z << endl ;


    char a  = 5 , b;

    b = a << 1 ;

    cout << "<< : " << (int)b << endl ;

    b = a >> 1 ;


    cout << ">> : " << (int)b << endl ;

}