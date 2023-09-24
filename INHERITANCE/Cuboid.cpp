#include <iostream>

using namespace std ;

class Rectangle{
    private : 
            int length ;
            int breadth ;

    public :
            Rectangle(int l = 0, int b = 0 ){
                length = l ;
                breadth = b ;
            }
            int getLength(){
                return length ;
            }
            int getBreadth(){
                return breadth ;
            }

            void setLenght(int l){
                length = l ;
            }

            void setBreadth(int b){
                breadth = b ;
            }

            int area(){
                return length * breadth ;
            }

            int perimeter(){
                return 2*(length+breadth);
            }
};

class Cuboid:public Rectangle{
    private: 
            int height ;
    
    public :
            Cuboid(int l = 0 , int b = 0 , int h = 0){
                height = h ;
                setBreadth(b) ;
                setLenght(l);
            }
            int getHeight(){
                return height ;
            }
            void setHeight(int h){
                height = h ;
            }

            int volume(){
                return getBreadth()*getLength()*height ;
            }
};

int main(){
    Cuboid c(10,12,15) ;
    cout << c.getBreadth() << endl;
    cout << c.getHeight() << endl;
    cout << c.getLength() << endl ;
    cout << c.volume() << endl;
    cout << c.area() << endl;
    cout << c.perimeter() << endl;


}