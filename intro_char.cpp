#include<iostream>

using namespace std;


int reverse(char name[], int size){
    int s=0;
    int e=size-1;
    while(s<e){
        swap(name[e],name[s]);
        e--;
        s++;
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i] !='\0';i++){
        count++;
    }
    return count;
}

int tolowercase(char name){
    if(name>='a' && name<='z'){
        return name;
    }
    else{
        int temp=name-'A'+'a';
        return temp;
    }
}

int palindrome(char name[], int size){

        int s=0;
        int e=size-1;
        while(s<=e){
            if(tolowercase(name[s])!=tolowercase(name[e])){
                return 0;
            }else{
                e--;
                s++;
            }
        }
        return 1;
}
int main(){
    char name[20];
    cin>>name;
    cout<<"Name:"<<name;
    int size=getlength(name);
    cout<<"\nSIze of Char:"<<size;
    reverse(name,size);
    cout<<"\nReverse of char:"<<name;
    cout<<"\nPalidrome:"<<palindrome(name,size);
}
