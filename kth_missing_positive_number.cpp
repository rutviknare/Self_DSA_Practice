#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v{2,3,4,7,11};
    vector<int> res;
    int k=5;
    int flag=0;
    int count=1;
    for(int i=0;i<v.size()*2;i++){
        for(int j=0;j<v.size();j++){
                if(count==v[j]){
                    flag=1;
                   // break;
                }
                // if(flag==1){
                //     break;
                // }
        }
        
        if(flag==0){
                res.push_back(count);
        }
        flag=0;
        count++;

    }  
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    } 
    cout<<res[k-1];
    return 0;

}