#include<iostream>

using namespace std;


void print(int arr[], int size){
    cout<<"size:"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}
bool findingkey(int arr[], int size,int key){
    print(arr,size);
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    int ans=findingkey(arr+1,size-1,key);
    return ans;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=0;
    int ans=findingkey(arr,size,key);
    if(ans){
        cout<<"Element Found";
    }
    else
    cout<<"Element Not FOund";
    return 0;
}