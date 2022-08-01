#include<iostream>

using namespace std;


bool polidrome(string name,int i, int j){
    if(i>j){
        return true;
    }
    if(name[i]!=name[j]){
        return false;
    }else{
        return polidrome(name,i+1,j-1);
    }
}

int main(){

    string name="aaabbbbaaa";
    int i=0;
    int j=name.length()-1;
    bool ans=polidrome(name,i,j);
    if(ans){
        cout<<"String is Polidrome...";
    }
    else{
        cout<<"String is Not Polidrome....";
    }
    return 0;
}