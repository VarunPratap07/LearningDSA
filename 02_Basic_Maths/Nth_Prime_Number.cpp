//Function to find the N'th prime number.
#include <iostream>
using namespace std ;
int Nth_Prime(int n){
    int nth=0 , prime , i=0 ;
    while(nth!=n){
        if(i==0||i==1){
            i++ ;
        }
        int factor=0 ;
        for(int j=1 ; j<=i ; j++){
            if(i%j==0){
                factor++;
            }
        }
        if(factor==2){
            nth++ ;
            prime=i ;
        }
        i++ ;    
    }
    return prime ; 
}
int main(){
    int n ;
    cout<<"Please enter what prime you want-" ;
    cin>>n ;
    if(n==1){
        cout<<"The "<<n<<"'st"<<" prime number "<<"is "<<Nth_Prime(n)<<"." ;
    }
    else if(n==2){
        cout<<"The "<<n<<"'nd"<<" prime number "<<"is "<<Nth_Prime(n)<<"." ;
    }
    else{
        cout<<"The "<<n<<"'th"<<" prime number "<<"is "<<Nth_Prime(n)<<"." ;
    }
}