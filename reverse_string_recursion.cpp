// #include<iostream>
// using namespace std;


// void swapstring(int i,int j,string& name){
//         if(i>j){
//             return;
//         }
//         swap(name[i],name[j]);
//         i++;
//         j--;
//         swapstring(i,j,name);
// }

// int main(){
//     string str="rutvik";
//     int i=0;
//     int j=str.length()-1;
//     swapstring(i,j,str);
//     cout<<str;
    
//     return 0;
// }


#include<iostream>
using namespace std;

void reverse(string name,int len){
        if(name.length()==0){
            return name[0];
        }
        char name=reverse(name,len+1);
}

int main(){

    string name="rutvik";
    int len=name.length();
    reverse(name,len);
    return 0;
}