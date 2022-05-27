#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<string> word{"abc","car","ada","racecar","cool"};
    
    for(string i:word){
        int a=0;
        int l=i.length()-1;
        while(a<l){
            if(i[a]==i[l]){
                a++;
                l--;
            }
        }
         if(a>=l){
                cout<<i<<endl;
    
            }
    }
    return 0;

}