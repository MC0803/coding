#include<iostream>
using namespace std;
struct node{
int data;
struct node *left;
struct node *right;
};

node* root=NULL;

void create(node* &root,int val);
void indisplay(node *root);

int main(){
int n,val,i;
cout<<"Enter number of nodes to enter";
cin>>n;
for(i=0;i<n;i++){
    cout<<"Enter data";
    cin>>val;
    create(root,val);
}
cout<<"Inorder Treversal";
indisplay(root);
}

void create(node* &root,int val){
    if(root==NULL){
     root=new node();
        root->data=val;
        root->left=root->right=NULL;
        return;
    }
    if(val<root->data){
        create(root->left,val);
    }
    else{
        create(root->right,val);
    }
   
}

void indisplay(node* root){
    if(root==NULL){
        return;
    }
    indisplay(root->left);
   cout<<root->data<<"  ";
   indisplay(root->right);

    
    
}