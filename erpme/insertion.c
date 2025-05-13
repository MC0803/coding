#include<stdio.h>

int main(){
int arr[]={12,3,45,6,55,8};
int i,n,j,key;
n=sizeof(arr)/sizeof(int);

for(i=1;i<n;i++){
   key = arr[i];
   j= i-1;

   while(j>=0 && arr[j]>key){
   arr[j+1]=arr[j];
   j=j-1;
     
   }

    arr[j+1]=key;

}

printf("sorted array\n");

for(i=0;i<n;i++){
    printf("  %d  ",arr[i]);
}

return 0;
}