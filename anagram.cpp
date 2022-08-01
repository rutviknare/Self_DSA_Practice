#include<iostream>
#include<algorithm>

using namespace std;

string remove(string name){
    string result="";
    int flag=0;
    for(int i=0;i<name.length()+2;i++){
        
        if(flag==1){
            i=0;
        }
        cout<<i<<"-"<<i+1<<endl;
        if(name[i]==name[i+1]){
            
            
            name.erase(i,2);
            flag=1;
        }
        else{
            flag=0;
        }
    }
    return name;

}

int main(){
    
    string name;
    cout<<"Enter your name:";
    getline(cin,name);
    string result=remove(name);
    cout<<"Remove:"<<result;
    return 0;



}