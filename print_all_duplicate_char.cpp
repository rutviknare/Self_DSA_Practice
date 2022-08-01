#include<iostream>
#include<map>
using namespace std;

int main(){

    string element="test string";
    map<char,int> count;
    for(int i=0;i<element.length();i++){
        count[element[i]]++;
    }
    for(auto i:count){
        if(i.second>1){
            cout<<i.first<<" Count:"<<i.second<<endl;
        }
    }

    return 0;
}