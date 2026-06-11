//For Loop -- Used when we know the number of required iteration.
#include <iostream>
int main(){
    int n ;
    using namespace std ;
    cout<<"Please enter how many times you wish to print hello world-" ;
    cin>>n ;
    for(int i=0 ; i<n ; i++){
        cout<<i+1<<". Hello world!\n" ;
    }
}