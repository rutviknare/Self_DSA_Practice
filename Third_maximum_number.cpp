#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    vector<int> word{1,2,2,3};
    map<int,int> map;
    for(auto i:word){
        map[i]++;
    }
    for(auto i:map){
        cout<<*i;
    }
    
    
    return 0;

}