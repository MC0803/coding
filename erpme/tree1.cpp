#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
node* root= NULL;
node* create(int val);
void display(node*root);

int main(){
    int val;
    cin>>val;
create(val);
display(root);
return 0;
}

node* create(int val){
    struct node *tmp;
    string line;
    root=(struct node *)malloc(sizeof(struct node));
    root->data = val;
    root->left=NULL;
    root->right=NULL;
    tmp=root;
    while(true){
     getline(cin,line);
     if(line.empty()){
        break;
     }
     try{
        val=stoi(line);
     if(val<tmp->data){
        tmp->left=create(val);
     }
     else{
        tmp->right=create(val);
     }
    }
    catch(const exception &e){
        break;
    }
    }
}

void display(node *root){ 
    if(root==NULL){
        cout<<"Empty";
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}