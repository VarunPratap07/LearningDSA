/*

Program to print the following pattern.

*********
 *******
  *****
   ***
    *

*/
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        for(int j=0 ; j<i-1 ; j++){
            cout<<" ";
        }
        for(int j=0 ; j<=2*(n-i) ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}