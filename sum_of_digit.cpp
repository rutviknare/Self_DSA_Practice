#include<iostream>

using namespace std;

int sumofdigit(int num){
    int sum=0;
    int last=0;
    while(num!=0){
        last=num%10;
        sum+=last;
        num/=10;
    }
    return sum;
}

int main(){

    int num=555;
    cout<<sumofdigit(num);

    return 0;
}