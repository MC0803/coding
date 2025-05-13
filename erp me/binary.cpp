#include<iostream>
using namespace std;

#define MAX 100

int main(){
    char a[MAX],key;
    int mid,low,high,i,j,n;
cout<<"Enter an array of elements";
    gets(a);
    cout<<"Enter element to search:";
    cin>>key;
    low=0;
    n=sizeof(a)/sizeof(int);
    high=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;a[i]!='\0';i++){
       mid=(low+high)/2;
       if(a[mid]==key){
        cout<<"Element found at location "<<mid<<endl;
        exit(0);
       }
       else if(a[mid]>key){
        low=mid+1;
       }
       else{
        high=mid-1;
       }
    }

    return 0;
}