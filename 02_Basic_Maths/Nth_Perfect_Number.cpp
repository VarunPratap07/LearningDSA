//Program to find n'th perfect number.
#include <iostream>
using namespace std ;
int Nth_Perfect_Number(int n){
    int factor , sumfactors=0 ,perfect , nth=0 ;
    int i=1 ;
    while(nth!=n){
        if(i==0||i==1){
            i++ ;
        }
        int factor=0 ;
        for(int j=1 ; j<i ; j++){
            if(i%j==0){
                factor=j ;
                sumfactors+=factor ;
            }
        }
        if(sumfactors==i){
            nth++ ;
            perfect=i ;
        }
        sumfactors=0 ;
        i++ ;    
    }
    return perfect ;
}
int main(){
    int n ;
    cout<<"Please enter what perfect number you want-" ;
    cin>>n ;
    if(n==1){
        cout<<"The "<<n<<"'st"<<" perfect number "<<"is "<<Nth_Perfect_Number(n)<<"." ;
    }
    else if(n==2){
        cout<<"The "<<n<<"'nd"<<" perfect number "<<"is "<<Nth_Perfect_Number(n)<<"." ;
    }
    else if(n==3){
        cout<<"The "<<n<<"'rd"<<" perfect number "<<"is "<<Nth_Perfect_Number(n)<<"." ;
    }
    else{
        cout<<"The "<<n<<"'th"<<" perfect number "<<"is "<<Nth_Perfect_Number(n)<<"." ;
    }
}