#include<iostream>

using namespace std;

int factorial(int a){

        if(a==0){
            return 1;
        }
        int choti=factorial(a-1);
        int badi=a*choti;
        return badi;
}

int main(){

    int n=4;
    cout<<factorial(4);
    return 0;
}