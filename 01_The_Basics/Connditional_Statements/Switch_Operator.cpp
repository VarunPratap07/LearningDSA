//Basic Calulator using Switch operator in c++.
#include <iostream>
int main(){
    using namespace std ;
    int x1 , x2 ;
    char operatr ;
    cout << "Please enter the first number = ";
    cin >> x1 ;
    cout << "Please enter the second number = ";
    cin >> x2 ;
    enter_operation:
    cout << "Please enter the operation to be performed on " << x1 <<" and "<< x2 <<" = " ;
    cin >> operatr ;
    switch (operatr)
    {
        case '+':
        cout << x1 << "+" << x2 << "=" <<x1+x2 ;
        break;
        case '-':
        cout << x1 << "-" << x2 << "=" <<x1-x2 ;
        break;
        case '*':
        cout << x1 << "*" << x2 << "=" <<x1*x2 ;
        break;
        case '/':
        cout << x1 << "/" << x2 << "=" <<x1/x2 ;
        break;
        default:
        cout << "Please enter a valid operator.\n" ;
        goto enter_operation ;
    }
}