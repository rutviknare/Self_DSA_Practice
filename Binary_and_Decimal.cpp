#include<iostream>
#include<cmath>
using namespace std;

void decimal_to_binary(int n){
    int i=0;
    int rem=0;
    while(n!=0){
        rem=n%2;
        cout<<rem<<" ";
        n=n/2;
    }
    cout<<endl;
}
void binary_to_decimal(int n){
    int sum=0;
    int rem=0;
    int index=0;
    while(n!=0){
        rem=n%10;
        sum+=pow(2,index)*rem;
        n=n/10;
        index++;
    }
    cout<<sum<<endl;
}

int main(){

    int n1=45;
    int n2=101;
    decimal_to_binary(n1);
    binary_to_decimal(n2);
    //cout<<pow(2,0);
    return 0;
}