#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int arr[10000];
    cout<<"Enter length of array to sort:";
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
     
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j= i-1;
        while(j>=0 && arr[j] > current){
           arr[j+1]=arr[j];
           j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 return 0;

}