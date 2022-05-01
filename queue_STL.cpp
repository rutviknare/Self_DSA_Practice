#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;
    q.push("rutvik");
    q.push("ravindra");
    q.push("nare");
    cout<<"\nFront element:"<<q.front();
    q.pop();
    cout<<"\nSIze:"<<q.size();
}