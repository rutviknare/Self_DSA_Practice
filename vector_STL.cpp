#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    cout<<"Capacity:"<<v.capacity();
    v.push_back(1);
    cout<<"\nCapacity:"<<v.capacity();
    v.push_back(2);
    cout<<"\nCapacity:"<<v.capacity();
    v.push_back(3);
    cout<<"\nCapacity:"<<v.capacity();
    cout<<"\nSize of Vector:"<<v.size();
    cout<<"\nINdex of vector:"<<v.at(2);
    cout<<"\nFirst element:"<<v.front();
    cout<<"\nEnd of vector:"<<v.back();
    v.pop_back();
    cout<<"\nSIze of vector:"<<v.size();
    cout<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    v.clear();
    

}