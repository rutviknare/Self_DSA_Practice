#include<iostream>

using namespace std;

char maxoccstring(string name){

    int arr[26]={0};
// count of the character
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    int max=-1, ans=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            ans=i;
            max=arr[i];
        }
    }
    return 'a'+ans;
}

int main(){

    string name;
    cin>>name;
    cout<<maxoccstring(name);
    return 0;
    
    
}