#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int arr[]={1,2,2};
    for(int i=0;i<size(arr);i++){
        int sum=0;
        for(int j=i;j<size(arr);j++){
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}