#include<iostream>
#include<vector>

using namespace std;

int selectionsort(vector<int> v){
    
    for(int i=0;i<v.size()-1;i++){
       int  min=v[i];
        for(int j=i+1;j<v.size();j++){
            if(v[j]<v[min]){
                min=j;
            }
        }
        swap(v[min],v[i]);
    }
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
}

int main(){
    vector<int> v{5,4,3,2,1};
    selectionsort(v);
    return 0;
}