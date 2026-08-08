/*
Program to print the follwing pattern-

A
BB
CCC
DDDD
EEEEE

*/
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-";
    cin>>n ;
    char character='A';
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<i+1 ; j++){
            cout<<character ;
        }
        character++ ;
        cout<<endl ;
    }
}