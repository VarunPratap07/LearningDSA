/*

Program to print the following pattern.

12345
1234
123
12
1

*/
#include <iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"Please enter the height of the pattern-";
    cin>>n;
    for(int i=n ; i>=1 ; i--){
        for(int j=1 ; j<=i ; j++){
            cout<<j;
        }
        cout<<"\n";
    }
}