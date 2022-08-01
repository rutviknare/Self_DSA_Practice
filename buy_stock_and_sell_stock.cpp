#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{7,1,5,3,6,4};
    int minprice=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<minprice){
            minprice=arr[i];
        }
        else if(arr[i]-minprice>maxprofit){
            maxprofit=arr[i]-minprice;
        }
    }
    cout<<"Maximum Profit:"<<maxprofit;

    

    return 0;
}