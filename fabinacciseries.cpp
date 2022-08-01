#include<iostream>
using namespace std;


int fibonacciseries(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans=fibonacciseries(n-1)+fibonacciseries(n-2);
    return ans;
}
int main(){
    int n=3;
    cout<<fibonacciseries(n);

    return 0;
}