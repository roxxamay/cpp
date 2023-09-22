#include "iostream" 

using namespace std ;

class Rational{
    private : 
                int q ;
                int p ;

    public : 
                Rational(int p = 1 , int q = 1 ){
                    this->p = p ;
                    this->q = q ;
                }

                Rational(Rational &r){
                    this->p = r.p ;
                    this->q = r.q ;
                }

                int getP(){
                    return p;
                }
                int getQ(){
                    return q;
                }

                void setP(int p){
                    this->p = p ;

                }
                void setQ(int q){
                    this->q = q ;
                }
                Rational operator+(Rational r){
                    Rational t ;
                    t.p = this->p*r.q+this->q*r.p ;
                    t.q = this-> q*r.q ;
                    return t ;
                }
                friend ostream & operator<<(ostream &out ,Rational &r);
};

ostream & operator<<(ostream &out ,Rational &r){
    out << r.p << "/" << r.q ;
    return out ;
}

int main(){
    Rational r1(3,4) ,r2(5,9) ,r3(6,9) ;

    r3 = r1+ r2 ;
    cout << "sum of " << r1 << " and " << r2 << " is "  << r3 << endl ;
}