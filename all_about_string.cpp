#include<iostream>

using namespace std;

bool valid(char arr){
    if((arr>='A' && arr<='Z') || (arr>='a' && arr<='z') || (arr>='1' && arr<='9')){
        return true;
    }
    return false;
}

string lowercase(string name)
{
    for(int i=0;i<name.length();i++){
        if((name[i]>='A' && name[i]<='Z'))
        name[i]+=32;
    }
    return name;
}
bool palindrome(string arr){
    int s=0;
    int e=arr.length()-1;
    while(s<e){
        if(arr[s++]!=arr[e--]){
            return false;
        }
    }
    return true;
}

int main(){
    
    string name;
    cout<<"Enter the name:";
    cin>>name;
    string temp;
    for(int i=0;i<name.length();i++){
        if(valid(name[i])){
            temp+=name[i];
        }
    }
    string result=lowercase(temp);
    cout<<endl;
    cout<<result;
    cout<<"\nPalindrome:"<<palindrome(result);
    return 0;
}