#include<iostream>
using namespace std;


void countprint(int n){
    if(n==0){
        return;
    }
    countprint(n-1);
    cout<<n<<" ";
}
int main(){

    int n=10;
    countprint(n);
    return 0;
}