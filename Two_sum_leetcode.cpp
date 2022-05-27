#include<iostream>
#include<vector>
using namespace std;

void sum(int arr[],int n,int target)
    {
     vector<int> v;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
               cout<<i<<" "<<j;
            }
        }
    }
    }

int main(){
    int n,arr[n],target;
   
    cout<<"Enter the Size:";
    cin>>n;
    cout<<"Enter the target value:";
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr,n,target);
}
    
