#include<iostream>

using namespace std;

int sumofarray(int* arr,int size){
    int ans=0;
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int prevans=sumofarray(arr+1,size-1);
    ans=arr[0]+prevans;
    return ans;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<sumofarray(arr,size);
    return 0;
}