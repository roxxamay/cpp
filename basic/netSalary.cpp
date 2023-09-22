#include "iostream"
using namespace std ;

int main(int argc, char const *argv[])
{
    int basicSalary , perOfAllowance , perOfDeduction , netSalary ;
    cout << "enter the amount of basic salary : " ;
    cin >> basicSalary  ;

    cout << "enter the percentage of allowances :  " ;
    cin >> perOfAllowance ;

    cout << "enter the percantage of deductions :  " ;
    cin >> perOfDeduction ;

    netSalary = basicSalary +((basicSalary * perOfAllowance)-(basicSalary * perOfDeduction)) ;

    cout << "netsalary is " << netSalary ;
    return 0;
}
