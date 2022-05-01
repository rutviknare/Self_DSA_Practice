#include<iostream>
#include<array>

using namespace std;

int main(){

    array<int,5> a={1,2,3,4,5};
    cout<<"Size of array:"<<a.size();
    cout<<"\nIndex 0f 3:"<<a.at(3);
    cout<<"\nCheck empty or not:"<<a.empty();
    cout<<"\nFirst element:"<<a.front();
    cout<<"\nlast element:"<<a.back();
    return 0;
}