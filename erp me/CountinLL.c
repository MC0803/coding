#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *nextptr;
}*stnode;

void create(int n);
int nodecount();
void displayList();

int main(){
    int n,total;

printf("Enter number of nodes");
scanf("%d",&n);
create(n);
printf("data entered in list are :\n");
displayList();
total=nodecount();
printf("Total number of nodes = %d \n",total);
return 0;

}

void create(int n){
    struct node *fnode,*tmp;
    int num,i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL) {
        printf("Memory cannot be allocated");
    }
    else{
        printf("Input data for first node :");
        scanf("%d",&num);
        stnode->num = num;
        stnode->nextptr=NULL;
        tmp = stnode;
for(i=2;i<=n;i++){
    fnode = (struct node *)malloc(sizeof(struct node));
    if(fnode == NULL) {
        printf("Memory cannot be allocated");
        break;
    }
    else{
        printf("Enter data for node %d",i);
        scanf("%d",&num);
        fnode->num = num;

        fnode->nextptr= NULL;
        tmp->nextptr=fnode;
        tmp = tmp->nextptr;
     }
    }
  }
}

int nodecount(){
    int ctr=0;
    struct node *tmp;
    tmp = stnode;
    while(tmp!=0){
        ctr++;
        tmp=tmp->nextptr;
    }
    return ctr;
}

void displayList() {
    struct node *tmp;
    if(stnode == NULL) {
        printf(" No data found in the list.");
    } else {
        tmp = stnode;
        while(tmp != NULL) {
            printf(" Data = %d\n", tmp->num);   
            tmp = tmp->nextptr;                
        }
    }
}
