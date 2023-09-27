/**
 * @file RectangleCuboid.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2023-09-27
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "iostream"
using namespace std ;

class Rectangle{
    public :
    void area(){
        cout << "area of rectangle \n" ;
    }
};

class Cuboid : public Rectangle{
    public:
        void volume(){
            cout << "volume of cuboid\n" ;
        }
};

int main(){
    Cuboid c ;
    Rectangle *p = &c ;

    p->area();
    //p->volume();  cant access it

    cout << "--------------------------------------------------------------------" << endl ;
    // Rectangle r ;
    // Cuboid *pt = &r ;

    // // pt->area();
    // // pt->volume();
    return 0;
}