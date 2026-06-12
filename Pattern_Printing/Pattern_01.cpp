/*

Program to print the following pattern.

*****
*****
*****
*****
*****

*/
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}