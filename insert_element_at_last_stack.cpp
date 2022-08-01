#include<iostream>
#include<stack>

using namespace std;

void insert(stack<int> s, int data){
    // base condition

    if(s.empty()){
        s.push(data);
        return;
    }

    int num=s.top();
    s.pop();

    insert(s,data);
    s.push(num);
}

int main(){

    stack<int> s;
    int number=5;
    insert(s,number);
    
    return 0;
}