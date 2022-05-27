#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);

    cout<<"Finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower bound:"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Lower bound:"<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"maximum:"<<max(a,b)<<endl;
    cout<<"minimum:"<<min(a,b)<<endl;

    swap(a,b);
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    string abcd="rutvik";
    reverse(abcd.begin(),abcd.end());
    cout<<"Reversed string:"<<abcd<<endl;

    rotate(abcd.begin(),abcd.begin()+2,abcd.end());
    cout<<"String after rotate:"<<abcd<<endl;
    sort(v.begin(),v.end());
    cout<<"Sorting of vector:"<<endl;
    for(int i:v){
        cout<<i<<endl;
    }


 }