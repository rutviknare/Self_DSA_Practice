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
        break;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail,int val){
    Node* newnode=new Node(val);
    tail->next=newnode;
    tail=newnode;
}

int getlength(Node* head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

Node* middlenode(Node* &head){
    Node* temp=head;
    int cnt=0;
    int len=getlength(head);
    int ans=(len/2);
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

int main(){

    Node* n1=new Node(1);
    Node* head=n1;
    Node* tail=n1;
    insertAtTail(tail,2);
    //print(head);
    insertAtTail(tail,3);
    //print(head);
    insertAtTail(tail,4);
    //print(head);
    insertAtTail(tail,5);
    Node* ans=middlenode(head);
    print(ans);
    return 0;

}