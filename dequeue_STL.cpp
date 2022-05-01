#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    for(int i:d){
        cout<<i<<" ";
    }
    // d.pop_back();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    // // d.pop_front();
    // for(int i:d){
    //     cout<<i<<" ";
    // }
    cout<<"\nindex:"<<d.at(1);
    cout<<"\nFirst element"<<d.front();
    cout<<"\nlast Element:"<<d.back();
}