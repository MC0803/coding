#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={12,3,45,55,7};
    int n,i,j,key,c=0;
    int low,high,mid,key1;
    n=sizeof(arr)/sizeof(arr[0]);
   for(i=1;i<5;i++){
    key=arr[i];
    j=i-1;
    cout<<"Original array";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter element to search:";
    cin>>key1;

    while(j>=0 && arr[j]>key){
        swap(arr[j+1],arr[j]);
        j--;

        key=arr[j+1];
        c++;
    }
   }
   low=0;
   high=n-1;
   while(low<=high){
       mid=low+high/2;
       if(key1>arr[mid]){
           low=mid+1;
       }
       else{
           high=mid-1;
       }
       if(key1==arr[mid]){
           cout<<"Element is: "<<arr[mid]<<endl;
           cout<<"Found at index "<<mid;
           break;
   
       }
   }
   return 0;

}