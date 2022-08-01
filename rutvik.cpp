#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    int max=0;
    string ans;
    string str="AAAABBBBBBCDDDDCBBBA";
    map<char,int> map;
    for(auto i:str){
        map[i]++;
    }
    for(auto i:map){
        if(i.second>max){
            max=i.second;
            ans=i.first;
        }
    }
    cout<<ans;
    
    return 0;
}

