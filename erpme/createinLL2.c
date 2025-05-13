#include<stdio.h>
#include<stdlib.h>

struct Node{
    int num;
    struct Node *nextptr;
}*stnode;

void create(int n);
void display();

int main(){
   int n;
   printf("Enter the number of nodes");
   scanf("%d",&n);
   create(n);
   display();
   return 0;
}

void create(int n){
    struct Node *fnode,*tmp;
    int num,i;
    stnode=(struct Node*)malloc(sizeof(struct Node));
    if(stnode==NULL){
        printf("Memory not allocated");
    }
    else{
     printf("Enter data for first node");
     scanf("%d",&num);
     stnode->num=num;
     stnode->nextptr=NULL;
     tmp=stnode;
    
    for(i=2;i<=n;i++){
        fnode = (struct Node*)malloc(sizeof(struct Node));
        if(fnode==NULL){
            printf("Memory cannt be allocated");
            break;
        }
        else{
            printf("Enter data for node %d",i);
            scanf("%d",&num);
            fnode->num=num;
            fnode->nextptr=NULL;
            tmp->nextptr = fnode;
            tmp=tmp->nextptr;
        }
     }
  } 
}
void display(){
    int ctr=0;
    struct Node *tmp;
    tmp=stnode;
    if(stnode==NULL){
        printf("List is Empty");
    }
    while(tmp!=NULL){
        printf("Data in list is %d\n",tmp->num);
        ctr++;
        tmp=tmp->nextptr;
        }
        printf("Total number of nodes = %d\n",ctr);
}