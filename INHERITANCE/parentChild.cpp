/**
 * @file parentChild.cpp
 * @author roxxamay (itsmeadityakumararya@gmail.com)
 * @brief C++ program to demonstrate implementation of Inheritance
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include "iostream" 
 #include "bits/stdc++.h" 

using namespace std ;

class parent{
    public : int id_p;

};

class child:public parent{
    public :int id_c ;
};

int main(){
    child obj ;
    obj.id_c =  15 ;
    obj.id_p = 5646;

    cout << "id of parent :" << obj.id_p << endl;
    cout << "id of child :" << obj.id_c ;
    return 0 ;
}