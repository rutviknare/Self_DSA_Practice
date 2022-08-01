#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    cout<<"Top element of stack:"<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty....";
    }else{
        cout<<"Stack is not empty.....";
    }
    cout<<"\nSize of stack:"<<s.size();

    return 0;
}