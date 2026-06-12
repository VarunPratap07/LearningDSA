/*

Program to print the following pattern.

*
**
***
****
****
***
**
*

*/
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<=i ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n ; i>=1 ; i--){
        for(int j=i ; j>=1 ; j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}