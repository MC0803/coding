#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int arr[10000];
    cout<<"Enter length of array to sort:";
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
   
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
