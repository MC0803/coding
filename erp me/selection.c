#include<stdio.h>

int main(){
 int arr[]={12,3,45,8,18};
 int n,i,j,minIdx=0,temp;
 
n=sizeof(arr)/sizeof(int);

for(i = 0; i < n - 1; i++) {
    minIdx = i;
    for(j = i + 1; j < n; j++) {
        if(arr[j] < arr[minIdx]) {
            minIdx = j;
        }
    }

    temp = arr[minIdx];
    arr[minIdx] = arr[i];
    arr[i] = temp;
}
 printf("Sorted array\n");

 for(i=0;i<n;i++){
    printf(" %d ",arr[i]);
 }

 return 0;
}