#include<stdio.h>
#include<stdlib.h>

struct node{
    char data;
    struct node *left;
    struct node *right;
}*root;

void create();
void inorder(struct node *root);

void create(){
    struct node *tmp;
    int i,n;
    printf("Enter number of nodes to enter: ");
    scanf("%d",&n);

    root =(struct node *)malloc(sizeof(struct node));
    printf("Enter data to enter ");
    scanf(" %c",&root->data);
    root->left=NULL;
    root->right =NULL;

    tmp=root;

    for(i=2;i<=n;i++){
       struct node * tmp1;
       tmp1=(struct node *)malloc(sizeof(struct node));
       printf("Enter data to enter: ");
       scanf(" %c",&tmp1->data);
        tmp1->left=NULL;
        tmp1->right =NULL;
        if(tmp->left==NULL){
            tmp->left =tmp1;
        }
        else{
            tmp->right=tmp1;
        }
        tmp=tmp1;
    };
}

void inorder(struct node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left); 
    printf("%c \n", root->data); 
    inorder(root->right); 
}

int main(){
 create();
 printf("inorder traversal of tree\n");
  inorder(root);
return 0;
}