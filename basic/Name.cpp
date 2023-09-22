#include "iostream"
using namespace std ;

int main(){
    string name ;

    cout << "may i know your name : " ;
    getline(cin,name) ;         //this will input all the word till hitted enter

    //cout << name          this will input only one word

    cout << "welcome " << name ;
    return 0 ;
}