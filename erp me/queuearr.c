#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int main() {
  int queue[MAX];
  int front = -1, rear = -1;  
  int val;
  int i;

  
  for(i = 0; i < MAX; i++) {
      printf("Enter element: ");
      scanf("%d", &val);

      if(rear == MAX - 1) {
          printf("Queue Overflow!\n");
          break;
      }

       if(front == -1) {
          front = 0;
      }
      rear = rear + 1;  
      queue[rear] = val;  
  }

  printf("Elements in the queue: ");
  if(front == -1) {
      printf("Queue is empty\n");
  } else {
      for(i = front; i <= rear; i++) {
          printf("%d ", queue[i]);  
      }
  }

  printf("\n");

  return 0;
}