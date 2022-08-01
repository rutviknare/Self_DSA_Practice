#include<iostream>

using namespace std;

int factorial(int num){

    if(num==0){
        return 1;
    }
    int result=factorial(num-1);
    return num*result;
}

int main(){

    int num=5;
    cout<<factorial(num);
    return 0;
}