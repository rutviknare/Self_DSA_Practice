#include<iostream>

using namespace std;

int  fabanocci(int num){
    if(num==0 || num==1){
        return num;
    }
    return fabanocci(num-1)+fabanocci(num-2);
}
int main(){

    int num=6;
    cout<<fabanocci(num);
    return 0;
}