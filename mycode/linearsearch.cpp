#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if( arr[i]==key){
            cout<<"Element found at index:"<<i<<endl;
            break;
        }else if (i==n-1) cout<<"Element not found";
        else continue;
    }
    return 0;

}