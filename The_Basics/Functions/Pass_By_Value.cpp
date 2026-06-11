//When we call a function by value , a copy of variable is passed and modified no change to the actual value.
#include <iostream>
void ChangeToZero(int a){
    while(a>0){
        a-- ;
    }
}
int main(){
    using namespace std ;
    int n ;
    cout<<"Please enter a number - ";
    cin>>n ;
    ChangeToZero(n);
    cout<<n<<"\n";
    cout<<"If funtion was Call by Value the number Would not have changed.\n" ;
    cout<<"If funtion was Call by Reference the number Would have changed.\n" ;
}