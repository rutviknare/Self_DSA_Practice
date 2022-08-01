#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{5,4,3,2,1};

    for(int i=0;i<arr.size();i++){
        int minindex=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}