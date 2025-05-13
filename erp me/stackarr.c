#include<stdio.h>
#include<stdlib.h>


#define MAX 5

int main(){
    int stack[MAX];
    int top=-1,val;
    int n=0,i=0;
    printf("Enter nubers of elements to enter");
  scanf(" %d",&n);
  for(i=0;i<=n;i++){
  if(top==MAX-1){
    printf("Stack overflow\n");
  }
  else{
    printf("Enter value to push");
    scanf(" %d",&val);
    top++;
    stack[top]=val;
  }
}
  if(top==-1){
    printf("Stack underflow\n");
  }
  else{
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf(" %d ", stack[i]);
    }
    printf("\n");
}
return 0;

}

