#include <iostream>
using namespace std;

int main() {
    // Declare and initialize marks variable
    int marks ;
    std::cout << "Please enter the value of marks = " ;
    std::cin >> marks ;
    std::cout << "The score is "<< marks << ".\n" ;
    // Check grade conditions using if-else ladder
    if (marks < 25) {
        cout << "Your Grade is F." << endl;  // Less than 25 is Grade F
    } 
    else if (marks >= 25 && marks <= 44) {
        cout << "Your Grade is E." << endl;  // Between 25 and 44 is Grade E
    } 
    else if (marks >= 45 && marks <= 49) {
        cout << "Your Grade is D." << endl;  // Between 45 and 49 is Grade D
    } 
    else if (marks >= 50 && marks <= 59) {
        cout << "Your Grade is C." << endl;  // Between 50 and 59 is Grade C
    } 
    else if (marks >= 60 && marks <= 69) {
        cout << "Your Grade is B." << endl;  // Between 60 and 69 is Grade B
    } 
    else if (marks >= 70) {
        cout << "Your Grade is A." << endl;  // 70 and above is Grade A
    }
    else {
        cout << "Invalid marks entered." << endl;  // Handles unexpected cases
    }

    return 0;
}