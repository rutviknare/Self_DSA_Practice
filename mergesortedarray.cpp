#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int arr[4],brr[4],res[8];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        cin>>brr[i];
    }
    for(int i=0;i<4;i++){
        res[i]=arr[i];
    }
    for(int i=0;i<4;i++){
        res[4+i]=brr[i];

    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}