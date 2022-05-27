#include<iostream>

using namespace std;

int factorial(int a){

    if(a==0){
        return 1;
    }
    return a*factorial(a-1);
}

int main(){

    int n;
    cin>>n;

    int f=factorial(n);
    cout<<"factorial of "<<n<<" is "<<f;
    return 0;
}