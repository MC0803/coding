#include<iostream>
using namespace std;
void posrev(int arr[],int n){
    int forward=0;
    int back=n-1;
    for(int i=0;i<n/2;i++){
        int temp = arr[forward];
        arr[forward]=arr[back];
        arr[back]=temp;
        forward++;
        back--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void negrev(int arr[],int n){
    int forward=0;
    int back=n-1;
    while(forward<back){
        int temp = arr[forward];
        arr[forward]=arr[back];
        arr[back]=temp;
        forward++;
        back--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++) cin>>arr[i];
    if(n%2==0) posrev(arr,n);
    else negrev(arr,n);
    return 0;



}