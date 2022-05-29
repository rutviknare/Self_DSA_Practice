#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum=0;
    int last_digit;
    while(n!=0){
        last_digit=n%10;
        sum=(sum*10)+last_digit;
        n=n/10;
    }
    cout<<sum<<endl;
    return 0;
}