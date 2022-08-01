#include<iostream>
#include<map>
using namespace std;

bool uniquestring(string name){

    //1st approach using map method
    // map<char,int> map;
    // for(int i=0;i<name.length();i++){
    //     map[name[i]]++;
    // }
    // for(auto i:map){
    //     if(i.second!=1){
    //         return false;
    //     }
    // }
    // return true;

    //2nd approach using other 26 array
    int arr[26]={0};
    for(int i=0;i<name.length();i++){
        arr[name[i]-'A']++;
    }

    for(int i=0;i<26;i++){
        if(arr[i]>1){
            return false;
        }
        //cout<<arr[i]<<" ";
    }
    return true;
}

int main(){

    string name="rutvik";
    cout<<uniquestring(name);
    return 0;
}