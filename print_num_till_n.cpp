#include<iostream>

using namespace std;

void printdec(int num){
    if(num==0){
        return;
    }
    cout<<num<<" ";
    return printdec(num-1);
}

void printinc(int num){
    
    if(num==0){
        return;
    }
    printinc(num-1);
    cout<<num<<" ";
}

int main(){

    int num=5;
    printdec(num);
    cout<<endl;
    printinc(num);
    return 0;
}