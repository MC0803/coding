#include<stdio.h>
int main(){
    int arr[]={12,4,45,55,18,9};
    int i,n,j,tmp;

    n=sizeof(arr)/sizeof(int);

    printf("Unsorted array :\n");
    for(i=0;i<n;i++){
        printf(" %d  ",arr[i]);
    }
    printf("\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
           if(arr[j]>arr[j+1]){
            tmp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=tmp;
           }
        }
    }
     
    printf("Sorted array:\n");
    for(i=0;i<n;i++){
        printf(" %d  ",arr[i]); 
    }

    return 0;
}