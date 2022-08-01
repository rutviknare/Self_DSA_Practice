#include<iostream>

using namespace std;

void walking(int src,int dest){
        cout<<src<<"->";
        if(src==dest){
            return;
        }  
        walking(src+1,dest);
}

int main(){

    int src=1,dest=10;
    walking(src,dest);

    return 0;
}