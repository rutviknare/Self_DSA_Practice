#include<iostream>
#include<unordered_map>
using namespace std;

void stringfrequency(string name){

    unordered_map<char,int> map;
    for(char i:name){
        map[i]++;
    }

    for(char i:name){
        if(map[i]!=0){
            cout<<i<<map[i]<<" ";
            map[i]=0;
        }
    }
    // for(int i=0;i<map.size();i++)
    //     cout<<map[i];
    // }   
    
}

int main(){

    string name="RUTVIKK";
    stringfrequency(name);
    //cout<<result;
    return 0;
}