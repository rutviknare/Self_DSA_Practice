#include<iostream>

using namespace std;

class stack{
    public:

     int *arr;
     int size;
     int top;

    stack(int v){
        this->size=v;
        arr=new int[size];
        top=-1;
    }

    void push(int data){
        if(size-top>0){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack is OverFlow..."<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is Underflow...."<<endl;
        }
        else{
            top--;
        }
    }

    int peek(){
        if(top>0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty....";
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
    }

};


int main(){

    stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    cout<<"Top Element:"<<stack.peek()<<endl;
    stack.pop();
    cout<<"Top Element:"<<stack.peek()<<endl;
    cout<<"stack EMpty or Not:"<<stack.isEmpty()<<endl;
   
    return 0;
}