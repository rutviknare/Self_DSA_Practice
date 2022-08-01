#include<iostream>

using namespace std;

int length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}
void swap(char arr[]){
    int s=0;
    int e=length(arr)-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
    cout<<"\nReverse Char:"<<arr;
}

bool palindrome(char arr[]){
    int s=0;
    int e=length(arr)-1;
    while(s<e){
        if(arr[s++]!=arr[e--]){
            return false;
        }
    }
    return true;
}

void uppercase(char arr[]){
    int s=0;
    int e=length(arr);
    while(s<e){
        arr[s++]-=32;
    }
    cout<<"\nUpper Case:"<<arr;
}
void lowercase(char arr[]){
    int s=0;
    int e=length(arr);
    while(s<e){
        arr[s++]+=32;
    }
    cout<<"\nLower Case:"<<arr;
}
void number(char arr[]){
    int s=0;
    int e=length(arr);
    while(s<e){
        arr[s++]-='0';
    }
    cout<<"\nNumber Case:"<<arr;
    
}
int main(){

    char arr[10];
    cout<<"Enter your name:";
    cin>>arr;
    cout<<"Your name is:"<<arr;
    // cout<<"\nLength:"<<length(arr);
    // swap(arr);
    // bool ans=palindrome(arr);
    // cout<<"\nPalindrome:"<<ans;
    //uppercase(arr);
    //lowercase(arr);
    number(arr);
    
    return 0;
}