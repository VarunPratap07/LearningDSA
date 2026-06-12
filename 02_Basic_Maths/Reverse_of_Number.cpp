//Program to reverse a number.
#include <iostream>
using namespace std ;
int main(){
    int n , temp , digit , reverse=0 ;
    cout<<"Please enter a number-" ;
    cin>>n ;
    temp=n ;
    while(n>0){
        digit=n%10 ;
        reverse=10*reverse+digit ;
        n/=10;
    }
    cout<<"Thr reverse of "<<temp<<" is "<<reverse<<"." ;
}