#include<iostream>
using namespace std;

int main(){
    int n,i,j,minI,tmp;
    int a[]= {12, 3, 45, 8, 18};
    n=sizeof(a)/sizeof(int);
    for(i=0;i<n;i++){
        minI=i;
        
        for(j=0;j<n;j++){
            if(a[j]<a[minI]){
                minI=j;
            }
        }
        tmp=a[minI];
        a[minI]=a[i];
        a[i]=tmp;
    }
    for(i=0;i<n;i++){
        cout<<a[i];
    }
}
