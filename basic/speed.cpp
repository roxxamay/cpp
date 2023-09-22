#include "iostream" 
#include "math.h"

using namespace std ;

int main(){
    int u , v , a ;
    float speed ;
    
    cout  <<  "enter u value : " ;
    cin >>  u;

    cout << "enter v value : " ;
    cin >> v ;

    cout << "enter a value : " ;
    cin >> a ;

    speed = (v*v - u*u)/(2*a) ;

    cout << "the speed : " << speed ;
    return 0 ;

 }