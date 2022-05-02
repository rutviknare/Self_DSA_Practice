#include<iostream>
#include<vector>

using namespace std;

bool answer(vector<int> nums){

     int count=0;
     for(int i=1;i<nums.size();i++){
         if(nums[i-1]>nums[i]){
             count++;
         }
     }
     int n=nums.size();
     if(nums[n-1]>nums[0]){
         count++;
     }
     return count<=1;

}
int main(){
    vector<int> nums{3,4,5,1,2};
    cout<<answer(nums);
}