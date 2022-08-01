#include<iostream>
#include<string>
using namespace std;

string replace(string name){
    string result="";
    for(int i=0;i<name.length();i++){
        if(name[i]==' '){
            result+='@';
            result+='4';
            result+='0';
            continue;
        }
        result+=name[i];
    }
    return result;

}

int main(){

    string name;
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"After replacing @40:"<<replace(name);
    return 0;
}