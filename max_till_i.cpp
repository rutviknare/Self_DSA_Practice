#include<iostream>
#include<cmath>
//#include<algorithm>
using namespace std;

int main(){

    int arr[]={0,-9,1,3,-4,5};
    int mx=INT_MIN;
    for(int i=0;i<size(arr);i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    return 0;
}