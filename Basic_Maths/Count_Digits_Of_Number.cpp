//Program to count digits of a Number entered by the user .
#include <iostream>
using namespace std ;
int main(){
    int n , digits=0 , temp;
    cout<<"Please enter a number-" ;
    cin>>n ;
    //Since n is lost after the loop.
    temp=n ; 
    while(n>0){
        digits++;
        n/=10;
    }
    cout<<"The number of digits in "<<temp<<" is "<<digits ;
}