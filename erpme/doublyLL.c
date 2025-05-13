#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node * next;
 struct node *prev;
}*stnode,*ennode;


void create(int n);
void display();
 int main(){
    int n;
 create(n);
 }

void create(int n){
    struct node *fnode,*tmp;
    int num,i;
    stnode=(struct node *)malloc(sizeof(struct node));
    if(stnode=NULL){
        printf("Memory not allocated");
    }
    else{
        printf("Enter data for first node");
        scanf("%d",&num);
        stnode->data=num;
        stnode->next=NULL;
        stnode->prev=NULL;
        tmp=stnode;
        
    }

 }