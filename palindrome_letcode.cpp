#include<iostream>

using namespace std;

bool valid(char ch){
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return true;
    }
    return false;
}

char lower_case(char result){
    if((result>='a' && result<='z') || (result>='0' && result<='9')){
        return result;
    }
    else{
        char temp=result+32;
        return temp;
    }
}

bool palindrome(string name){
    int s=0;
    int e=name.length()-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main(){

    string element=" ";
    string result="";
    for(int i=0;i<element.length();i++){
        if(valid(element[i])){
            result.push_back(element[i]);
        }
    }

    for(int i=0;i<result.length();i++){
        result[i]=lower_case(result[i]);
    }

    if(palindrome(result)){
        cout<<"Palindrome...";
    }
    else{
        cout<<"Not Palindrome....";
    }
    //cout<<result;
    return 0;
}