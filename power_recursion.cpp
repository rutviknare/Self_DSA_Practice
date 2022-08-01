#include<iostream>
using namespace std;

int power(int n){
    if(n==0){
        return 1;
    }
    int A=power(n-1);
    int ans=2*A;
    return ans;
}

int main(){
    int n=6;
    cout<<power(n);
    return 0;
}