#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        this->data=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void printLinkedlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void insertNode(Node* &tail, int val){
    Node* newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;

}

int lenlinkedlist(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
int main(){

    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    printLinkedlist(head);
    cout<<"\nLength of linkedlist:"<<lenlinkedlist(head)<<endl;
    insertNode(tail,20);
    printLinkedlist(head);
    return 0;

}