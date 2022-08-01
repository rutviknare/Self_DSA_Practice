#include<iostream>
using namespace std;


bool sorted(int arr[], int num){

    if(num==0){
        return true;
    }
    int restarray=sorted(arr+1,num-1);
    return (arr[0]<arr[1] && restarray);

}
int main(){
    int num=5;
    int arr[num]={1,4,3,4,5};
    cout<<sorted(arr,num);
    return 0;
}