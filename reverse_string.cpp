#include<iostream>
#include<string>
using namespace std;

string reverse(string result){
    int s=0;
    int e=result.length()-1;
    while(s<e){
        swap(result[s++],result[e--]);
    }
    return result;
}

int main(){

    string name;
    cout<<"Enter the string:";
    getline(cin,name);
    //name[name.length()-1]=' ';
    string temp="";
    string result;
    for(int i=0;i<=name.length();i++){
        temp+=name[i];
        if(name[i]==' '|| name[i]=='\0'){
            result+=reverse(temp);
            temp.erase();
            result+=" ";
        }
        //cout<<result;
    }
    cout<<"Ans:"<<result;
    return 0;
}