#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr{5,4,-1,7,8};
    int ans=INT_MIN;
    int currsum=0;
    for(int num:arr){
        currsum+=num;
        ans=max(ans,currsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<"Maximum SubArray:"<<ans;

    

    return 0;
}