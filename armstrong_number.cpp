#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int temp=n;
    
    int rem=0,sum=0;
    while(n!=0){
        rem=n%10;
        sum+=pow(rem,3);
        n=n/10;
        
    }
    if(sum==temp){
        cout<<"Number is Armstrong....."<<endl;
    }else{
        cout<<"Number is not Armstrong.....";
    }
    return 0;
}