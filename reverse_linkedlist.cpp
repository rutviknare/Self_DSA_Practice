#include<iostream>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail,int val){
    Node* newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;
}

Node* reverse(Node* &head){
    Node* prev=NULL;
    Node* crr=head;
    Node* forward=NULL;
    while(crr!=NULL){
        forward=crr->next;
        crr->next=prev;
        prev=crr;
        crr=forward;
    }
    return prev;
}
int main(){

    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    insertAtTail(tail,20);
    //print(head);
    insertAtTail(tail,30);
    //print(head);
    insertAtTail(tail,40);
    print(head);
    Node* newnode=reverse(head);
    print(newnode);
    return 0;

}