#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }
    
};
node* buildtree(node* root){

        int data;
        cout<<"Enter the data:";
        cin>>data;
        root=new node(data);
        if(data==-1){
            return NULL;
        }
        cout<<"Enter data for left side:"<<data<<endl;
        root->left=buildtree(root->left);
        cout<<"Enter data for right side:"<<data<<endl;
        root->right=buildtree(root->right);
        return root;
}

void levelordertraversal(node* root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}


void inordertraversal(node* root){
    if(root==NULL){
        return;
    }

    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}
void preordertraversal(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(node* root){
    if(root==NULL){
        return;
    }

    postordertraversal(root->left);
    postordertraversal(root->right);
    cout<<root->data<<" ";
}

int heightoftree(node* root){
        if(root==NULL){
            return 0;
        }

        int left=heightoftree(root->left);
        int right=heightoftree(root->right);

        int ans=max(left,right)+1;
        return ans;
}
int main(){


    node* root=NULL;
    root=buildtree(root);
    levelordertraversal(root);
    cout<<"Inorder traversal:"<<endl;
    inordertraversal(root);
    cout<<"\nPreorder traversal:"<<endl;
    preordertraversal(root);
    cout<<"\nPostorder traversal:"<<endl;
    postordertraversal(root);
    cout<<"\nHeight of tree:"<<heightoftree(root);
    return 0;
}