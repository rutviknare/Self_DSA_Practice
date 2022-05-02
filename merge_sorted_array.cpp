#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int merge_array(vector<int> a,vector<int> b){
    int fixed_size=a.size()+b.size();
    vector<int> res;
    for(int i=0;i<a.size();i++){
        res.push_back(a[i]);
    }
    for(int i=0;i<b.size();i++){
        res.push_back(b[i]);
    }

    for(int i=0;i<fixed_size;i++){
        cout<<res[i]<<" ";
    }
    cout<<"\nSize of res:"<<res.size()<<endl;
    sort(res.begin(),res.end());
    for(int i=0;i<fixed_size;i++){
        cout<<res[i]<<" ";
    }
    res.resize(20);
    cout<<"\nSize of vector: "<<res.size();

} 

int main(){
    vector<int> a{2,4,6,8,10};
    vector<int> b{1,3,5,7,9};
    merge_array(a,b);
    return 0;
}