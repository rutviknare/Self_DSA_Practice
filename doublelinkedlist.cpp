#include<iostream>

using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        this->next=NULL;
        this->data=val;
        this->prev=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int length(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int val){
    //Node* temp=head;
    Node* newnode=new Node(val);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insertAttail(Node* &tail, int val){
    Node* newnode=new Node(val);
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insertAtposition(Node* tail,Node* &head,int pos,int val){
    if(pos==1){
        insertAtHead(head,val);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAttail(tail,val);
        return;
    }
    Node* newnode=new Node(val);
    newnode->next=temp->next;
    temp->next->prev=newnode; 
    temp->next=newnode;
    newnode->prev=temp;
}
int main(){

    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    //print(head);
   // cout<<length(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);
    insertAtHead(head,16);
    print(head);
    insertAttail(tail,55);
    print(head);
    insertAttail(tail,60);
    print(head);
    insertAtposition(tail,head,2,44);
    print(head);

    return 0;
}