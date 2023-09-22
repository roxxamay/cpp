#include "iostream"

using namespace std ;

class complex{
    private : 
            int real ;
            int img ;

    public :
            complex(int r = 0 , int i = 0){
                real = r ;
                img = i ;
            }
            friend ostream & operator<<(ostream &out , complex &c);

            friend istream & operator >> (istream &in ,complex &c);
};



ostream & operator<<(ostream &out , complex &c){
    out<<c.real << " +i " << c.img ;
    return out;
}

istream & operator >> (istream &in , complex &c){
    cout << "enter real part : " ;
    in >> c.real ;

    cout <<"enter img part : " ;
    in >> c.img ;
    return in ;   
}

int main(){
    complex c;
    cin >> c ;

    cout << "the complete object is : " ;
    cout<<c ;
}