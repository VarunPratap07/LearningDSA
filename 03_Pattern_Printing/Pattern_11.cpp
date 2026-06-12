/*

Program to print the following pattern.

1
01
101
0101
10101

*/
#include <iostream>
using namespace std ;
int main(){
    int n , start ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        if(i%2==0){
            start=0 ;
        }
        if(i%2!=0){
            start=1 ;
        }
        for(int j=1 ; j<=i ; j++){
            cout<<start;
            start=1-start ;
        }
        cout<<"\n";
    }
}