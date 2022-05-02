#include<iostream>
#include<vector>
using namespace std;
int reverse_array(vector<int> v,int k){
    int s=k+1,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
} 

int main(){
    vector<int> v{1,2,3,4,5,6};
    int k=3;
    reverse_array(v,k);
    return 0;
}