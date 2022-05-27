#include<iostream>
using namespace std;

 bool palindrome(int x){
    int rev=0,rem;
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        
        x=x/10;
        if(rev==x){
            cout<<rev;
            return true;
        }
        
    }

     return false;
    }
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    cout<<palindrome(x);
}