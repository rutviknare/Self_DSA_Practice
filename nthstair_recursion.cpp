#include<iostream>
using namespace std;

int stair(int step){
    if(step<0){
        return 0;
    }
    if(step==0){
        return 1;
    }
    int ans=stair(step-1)+stair(step-2);
    return ans;
}

int main(){

    int n=3;
    cout<<stair(n);
    return 0;
}