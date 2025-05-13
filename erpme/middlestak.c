#include<stdio.h>
#include<stdlib.h>


#define MAX 5

int main(){
    int stack[MAX];
    int top=-1,val=0;
    int n=0,i=0,c=0;
    printf("Enter nubers of elements to enter");
  scanf("%d",&n);
  for(i=0;i<=n;i++){
  if(top==MAX-1){
    printf("Stack overflow\n");
  }
  else{
    printf("Enter value to push");
    scanf("%d",&val);
    top++;
    stack[top]=val;
    c++;
  }
}
if(stack ==NULL){
    printf("Stack underflow\n");
}
for(i=0;i<=n;i++){
    if(i==c/2){
        i++;
    }
    printf("%d",stack[i]);
}

return 0;

}
