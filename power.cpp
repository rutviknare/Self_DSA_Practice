#include<iostream>
using namespace std;

int power(int num,int pow){

    if(pow==0){
        return 1;
    }
    int result=power(num,pow-1);
    return num*result;

}


int main(){


    int num=2,pow=3;
    cout<<power(num,pow);
    return 0;
}