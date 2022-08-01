#include<iostream>

using namespace std;

class human{
    public:
    void setWeight(){
        cout<<"human";
    }

};
class B: public human{
    public:
    void setWeight(){
        cout<<"B";
    }
};

int main(){
    human b1;
    b1.setWeight();
    return 0;
}