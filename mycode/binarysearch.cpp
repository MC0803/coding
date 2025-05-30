#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int key;
    cout<<"Entr key to search ";
    cin>>key;
    int low=0,mid=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            cout<<"Element found at index : "<<mid+1<<endl;
            break;
        }
        else if(arr[mid]<key) low=mid+1;
        else high = mid-1;
        if(low>high) cout<<"Element not found";
    }
    return 0;
}