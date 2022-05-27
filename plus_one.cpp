#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v{0,9};
    //int temp=v[v.size()-1]+1;
    if(v[v.size()-1]==9){
        int temp=v[v.size()-1];
        v[v.size()-1]=0;
        v[v.size()-2]=v[v.size()-2]+1;
    }
    for(auto i=0;i<v.size();i++){
        cout<<v[i];
        
    }
            
    return 0;
}