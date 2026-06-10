#include <iostream>
using namespace std;

int main() {
    int marks ;
    std::cout << "Please enter the value of marks = " ;
    std::cin >> marks ;
    std::cout << "The score is "<< marks << ".\n" ;
    if (marks < 25) {
        cout << "Your Grade is F." << endl;  
    } 
    else if (marks >= 25 && marks <= 44) {
        cout << "Your Grade is E." << endl;  
    } 
    else if (marks >= 45 && marks <= 49) {
        cout << "Your Grade is D." << endl;  
    } 
    else if (marks >= 50 && marks <= 59) {
        cout << "Your Grade is C." << endl;  
    } 
    else if (marks >= 60 && marks <= 69) {
        cout << "Your Grade is B." << endl;  
    } 
    else if (marks >= 70) {
        cout << "Your Grade is A." << endl;
    }  
    else {
        cout << "Invalid marks." << endl;  
    return 0;
    }
}