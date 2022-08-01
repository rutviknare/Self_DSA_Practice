#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string element="rutvikrutvik";
    string result;
    int arr[26]={0};

    for(int i=0;i<26;i++){
        arr[element[i]-'a']++;
        
    }
    for(int i=0;i<element.length();i++){
        if(arr[i]>0){
            result.push_back(element[i]);
            result.push_back(arr[i]);
        }
    }
    cout<<result<<endl;
    return 0;
}