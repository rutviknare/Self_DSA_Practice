#include<iostream>
using namespace std;
int sum(int num){

    if(num==0){
        return 0;
    }

    int result=sum(num-1);
    return num+result;
}

int main(){

    int num=4;
    cout<<sum(num);
    return 0;
}