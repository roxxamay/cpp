/**
 * @file virtualBase.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief Avoiding ambiguity using the virtual base class
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include"iostream"
using namespace std ;

class ClassA{
    public :
        int a ;
};

class ClassB : virtual public ClassA {
    public :
        int b ;
};

class ClassC : virtual public ClassA{
    public :
        int c ;
};

class ClassD : public ClassB , public ClassC {
    public :
        int d ;
};

int  main(){
    ClassD obj ;

    obj.a = 10 ;
    obj.a = 100 ;
    obj.a = 69;


    obj.b = 20 ;
    obj.c = 46 ;
    obj.d = 564; 

    cout << "\n a : " << obj.a ;
    cout << "\n b : " << obj.b ;
    cout << "\n c : " << obj.c ;
    cout << "\n d : " << obj.d  << endl ;

    return 0 ;
}