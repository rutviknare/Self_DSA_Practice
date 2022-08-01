#include<iostream>
#include<stack>

using namespace std;

void middle_of_stack(stack<int> &s, int count){
    int size=s.size();
    int middle=size/2;
    if(count==middle){
         s.pop();
         return;
    }
    int num=s.top();
    s.pop();
    middle_of_stack(s,count+1);
    s.push(num);
}

int main(){

    stack<int> s;
    int count=0;
    middle_of_stack(s,count);
    return 0;
}