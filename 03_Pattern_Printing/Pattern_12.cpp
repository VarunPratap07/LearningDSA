/*

Program to print the following pattern.

 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15

*/
#include <iostream>
using namespace std ;
int main(){
    int n , start=1 ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=i ; j++){
            cout<<" "<<start;
            start=1+start ;
        }
        cout<<"\n";
    }
}