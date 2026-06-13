//Program to find the N'th Armstrong number.
#include <iostream>
#include <math.h>
using namespace std ;
int Nth_Armstrong_Number(int n){
    int nth=0 , armstrong , i ;
    i=0 ;
    while(nth!=n){
        int temp=i,temp2=i,temp3=i,digits=0,sum=0 ;
        while(temp3!=0){
            temp3=temp3/10 ;
            digits++ ;
        }
        int digit=0 ;
        while(temp!=0){
            digit=temp%10 ;
            sum+=pow(digit,digits);
            temp/=10;
        }
        if(sum==temp2){
            armstrong=temp2 ;
            nth++;
        }
        i++;
    }
    return armstrong ;
}
int main(){
    int n ;
    cout<<"Please enter what Armstrong number you want-" ;
    cin>>n ;
    if(n==1){
        cout<<"The "<<n<<"'st"<<" Armstrong number "<<"is "<<Nth_Armstrong_Number(n)<<"." ;
    }
    else if(n==2){
        cout<<"The "<<n<<"'nd"<<" Armstrong number "<<"is "<<Nth_Armstrong_Number(n)<<"." ;
    }
    else if(n==3){
        cout<<"The "<<n<<"'rd"<<" Armstrong number "<<"is "<<Nth_Armstrong_Number(n)<<"." ;
    }
    else{
        cout<<"The "<<n<<"'th"<<" Armstrong number "<<"is "<<Nth_Armstrong_Number(n)<<"." ;
    }
}