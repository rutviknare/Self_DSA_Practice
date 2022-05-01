#include<iostream>
using namespace std;

int firstoccurence(int arr[], int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key){
            s=mid+1;

        }
        else if(arr[mid]<key){
            e=mid-1;
        }
            mid=s+(e-s)/2;

    }
    return ans;
}

int endoccurence(int arr[], int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key){
            s=mid+1;

        }
        else if(arr[mid]<key){
            e=mid-1;
        }
            mid=s+(e-s)/2;

    }
    return ans;
}

int main(){

int arr[]={1,2,3,3,5};
cout<<"First occurence of 3 is:"<<firstoccurence(arr,5,3);
cout<<"\nLAst occurence of 3 is:"<<endoccurence(arr,5,3);

}