#include<iostream>

using namespace std;

int factorial(int a){

    return a*factorial(a-1);
}

int main(){

    int n;
    cin>>n;

    factorial(n);
    cout<<factorial of <<n<< is:;
    return 0;
}