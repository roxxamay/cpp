#include "iostream"

using namespace std ;

class Student {
    private:
        int roll ;
        string name ;
        int mathsMarks ;
        int phyMarks ;
        int chemMarks ;

    public :
        Student(int roll , string name , int mathsMarks ,int phyMarks ,int chemMarks){
            this->roll = roll ;
            this->name = name ;
            this->mathsMarks = mathsMarks ;
            this->phyMarks = phyMarks ;
            this->chemMarks = chemMarks ;

        }

        int total(){
            return mathsMarks + phyMarks + chemMarks ;
        }

        char grade(){
            float average = total()/3 ; 
            if(average > 60 ){
                return 'A' ;
            }
            else if (average >= 40 && average < 60)
            {   
                return 'B' ;
            }else{
                return 'C' ;

            }
        }
} ;

int main(){
    int roll ;
    string name ;
    int m , p , c ;
    cout << "ENTER ROLL NUMBER OF STUDENTSS : " ;
    cin >> roll ;

    cout << "ENTER NAME OF STUDENTS : " ;
    cin >> name ;

    cout << "ENTER MARKS IN MATHS :  " ;
    cin >> m ;

    cout << "ENTER MARKS IN PHYSICS : ";
    cin >> p ;

    cout << " ENTER MARKS IN CHEMISTRY : ";
    cin >> c ;

    Student s(roll , name ,m , p ,c );

    cout << "total marks : " << s.total() << endl ;
    cout << " grade of students : " << s.grade() << endl ;
}