#include<iostream>
#include<unordered_map>
using namespace std;

char maxoccurchar(string name){
    int arr[26]={0};
    for(int i=0;i<name.length();i++){
        int number=0;
        number=name[i]-'a';
        arr[number]++;
    }

    int max=0;
    int ans=0;

    for(int i=0;i<26;i++){
        if(arr[i]>max){
            max=arr[i];
            ans=i;
        }
    }
    char result='a'+ans;
    return result;

}

int main(){
    string name;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"maximum occur char:"<<maxoccurchar(name);
    return 0;
}