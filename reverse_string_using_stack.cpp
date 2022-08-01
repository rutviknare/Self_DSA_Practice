#include<iostream>
#include<stack>
using namespace std;

int main(){


    string name="rutvik";
    string result="";
    stack<char> s;
    for(int i=0;i<name.length();i++){
        char ch=name[i];
        s.push(ch);
    }

    while(!s.empty()){
        char ch=s.top();
        result.push_back(ch);
        s.pop();
    }
    cout<<result<<endl;
    return 0;
}