#include<iostream>
using namespace std;

int firstoccur(int arr[],int size,int key){

    int start=0;
    int ans=-1;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastoccur(int arr[],int size,int key){

    int start=0;
    int ans=-1;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int main(){ 
    int arr[12]={1,2,3,3,3,3,3,3,3,6,7,8};
    cout<<"First occurence of 3 is: "<<firstoccur(arr,12,3)<<endl;
    cout<<"Last occurence of 3 is: "<<lastoccur(arr,12,3);

    return 0;
}