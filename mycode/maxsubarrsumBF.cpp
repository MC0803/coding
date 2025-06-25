#include<iostream>
using namespace std;

int maxsubarr(int arr[],int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
           int currsum=0;
           for(int i=start;i<=end;i++){
            currsum+=arr[i];
           }
           cout<<currsum<<" ";
        }
        cout<<endl;
    }
    return 0;

}

int main(){
    int arr[5]={2,-3,6,-5,2};
    int n=sizeof(arr)/sizeof(int);
    maxsubarr(arr,n);
    return 0;
}
