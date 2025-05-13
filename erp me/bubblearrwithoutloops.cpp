#include<iostream>
#include<algorithm>
using namespace std;
void resort(int arr[],int n);
void bubble(int arr[],int n,int i);

int main(){
    int n,arr[]={12,3,45,55,7};
    n=sizeof(arr)/sizeof(arr[0]);
    resort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

 void resort(int arr[],int n){
    if(n==1){
        return;
    }
    bubble(arr,n,0);
    
    resort(arr,n-1);
 }
 void bubble(int arr[],int n,int i){
if(i==n-1){
    return;
}
if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
}
bubble(arr,n,i+1);
 }