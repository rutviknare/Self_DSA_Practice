#include<iostream>
#include<queue>

using namespace std;

int main(){
    //max heap
    priority_queue<int> max;
    // min heap
    priority_queue<int, vector<int>, greater<int>> min;
    max.push(1);
    max.push(4);
    max.push(2);
    max.push(5);
    cout<<"\nSize:"<<max.size();
    int n=max.size();
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    min.push(1);
    min.push(4);
    min.push(2);
    min.push(5);
    for(int i=0;i<n;i++){
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;
    
}