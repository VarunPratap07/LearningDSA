//While loop is used when we do no know the total number of iteration.
#include <iostream>
int main(){
    int n ;
    using namespace std ;
    cout<<"Please enter the value of n-" ;
    cin>>n ;
    while(n>5){
        cout<<n<<" iteration.\n" ;
        n-- ;
    }
    cout<<"\n";
    cout<<"Now n is "<<n;
}