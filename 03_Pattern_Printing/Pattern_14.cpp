/*
Program to print the follwing pattern-

A
AB
ABC
ABCD
ABCDE

*/
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-" ;
    cin>>n ;
    for(int i=1 ; i<=n ; i++){
        char c='A' ;
        for(int j=1 ; j<=i ; j++){
            cout<<c ;
            c++ ;
        }
        cout<< endl ;
    }
}