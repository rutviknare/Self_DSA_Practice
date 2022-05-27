#include<iostream>
#include<vector>
// #include<algorithm>

using namespace std;

int move_zeros(vector<int> v){
        int i=0;
        for(int j=0;j<v.size();j++){
            if(v[j]!=0){
                swap(v[i],v[j]);
                i++;
            }
        }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }  
    // rotate(v.begin(),v.begin()+2,v.end()); 
} 

int main(){

    vector<int> v{4,0,5,2,0,0,8,5,4};
    move_zeros(v);
    return 0;
}