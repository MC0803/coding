#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

node* root=NULL;
node* create(node* root,int val);
node* createN(int val);
void postdisplay(node* root);


int main(){
   int val;
   string line;
while(true){
    getline(cin,line);
    if(line.empty()){
        break;
    }
    try{
        val=stoi(line);
       root=create(root,val);
    }
    catch(const exception &e){
        break;
    }
}
postdisplay(root);
return 0;
}

node* createN(int val){
    node* newnode=new node();
    newnode->data=val;
    newnode->left=newnode->right=NULL;
    return newnode;
}

node* create(node* root,int val){
    if(root==NULL){
        return createN(val);
    }
    if(val<root->data){
        root->left=create(root->left,val);
    }
    else{
        root->right=create(root->right,val);
    }
    return root;
}
void postdisplay(node* root){
    if(root==NULL){
        return;
    }
    postdisplay(root->left);
    postdisplay(root->right);
    cout<<root->data<<" ";
}