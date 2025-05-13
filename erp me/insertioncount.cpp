#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={12,3,45,55,7};
    int n,i,j,key,c=0;
    n=sizeof(arr)/sizeof(arr[0]);
   for(i=1;i<5;i++){
    key=arr[i];
    j=i-1;

    while(j>=0 && arr[j]>key){
        swap(arr[j+1],arr[j]);
        j--;

        key=arr[j+1];
        c++;
    }
   }

   for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   cout<<"Number of swap: ";
   cout<<c;
   return 0;

}