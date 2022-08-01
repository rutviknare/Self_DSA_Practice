#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        this->data=val;
        this->next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}

void insertAtTail(node* &tail, int val){
    node* temp=new node(val);
    tail->next=temp;
    tail=temp;
}

void printlinkedlist(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtPosition(node* &head, int position, int d){
    node* temp=head;
    int cnt=1;
    if(position==1){
        insertAtHead(head,d);
        return;
    }
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;
}
int main(){
    node* n1=new node(10); 
    //node* n2=new node(20);
    node* head=n1;
    node* tail=n1;
    printlinkedlist(head);
    insertAtHead(head,5);
    printlinkedlist(head);
    insertAtHead(head,2);
    printlinkedlist(head);
    insertAtTail(tail,12);
    printlinkedlist(head);
    insertAtTail(tail,20);
    printlinkedlist(head);
    insertAtPosition(head,3,22);
    printlinkedlist(head);
    return 0;

}