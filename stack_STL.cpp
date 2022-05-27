#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("rutvik");
    s.push("ravindra");
    s.push("nare");
    s.pop();
    cout<<"\nTop of the stack:"<<s.top();
    cout<<"\nSize of stack:"<<s.size();
    cout<<"\nempty or not:"<<s.empty();
}