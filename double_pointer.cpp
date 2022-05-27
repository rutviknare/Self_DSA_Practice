#include<iostream>
using namespace std;

// void update(int a){
//     a++;
// }

void update(int& a){
    a++;
}
int main(){

    int n=5;
    cout<<"Before n value:"<<n<<endl;
    update(n);
    cout<<"After n value:"<<n<<endl;
    return 0;
}