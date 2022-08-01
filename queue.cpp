#include<iostream>
#include<queue>

using namespace std;

int main(){

    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // cout<<q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;
    // cout<<"SIze:"<<q.size()<<endl;

    string number="123";
    if(stoi(number)<100){
        cout<<"A"<<endl;
    }
    else{
        cout<<"B";
    }
    //cout<<number-1;
    return 0;
}