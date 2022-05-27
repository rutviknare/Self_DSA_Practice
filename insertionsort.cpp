#include<iostream>
#include<vector>
using namespace std;

int insertionsort(vector<int> v){

    for(int i=1;i<v.size();i++){
        int temp=v[i];
        int j=i-1;
        for(;j>=0;j--){
            if(v[j]>temp){
                v[j+1]=v[j];
            }
            else{
                break;
            }
        }
        v[j+1]=temp;
    }
    for(auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
}

int main(){
    vector<int> v{6,5,4,3,2,1};
    cout<<"Insertion Sort:";
    insertionsort(v);
    return 0;
}