#include "iostream" 
#include"math.h"

using namespace std ;

int main(){

    float a ,b ,c ;
    cout << "the expressin must be in form of " <<endl ;
    cout<< "axsq + bx + c = 0 " << endl ;

    cout << "following values must stisfy  b^2-4*a*c>=0 " << endl ;

    cout << "enter value of a : " ;

    cin >> a ;

    cout << "enter value of b : " ;

    cin >> b ;

    cout << "enter value of c : " ;
    cin>> c ;

    float alpha , beta ;

    alpha = (-b + sqrt((b*b)- (4*a*c)))/2*a ;
    beta = (-b - sqrt((b*b)- (4*a*c)))/2*a ;

    cout << "roots are "<< alpha << " and " << beta ;
    return 0 ;

}