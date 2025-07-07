#include<iostream>
#include<string>
using namespace std;
void touppercase(char arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>='a' && arr[i]<='z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}
void tolowercase(char arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main(){
    char arr[] = {'A','p','p','L','e'};
    int n = sizeof(arr)/sizeof(arr[0]);
    touppercase(arr,n);
    cout<< "Uppercase String: ";
    cout<< arr << endl;
    tolowercase(arr,n);
    cout<< "Lowercase String: ";
    cout<< arr << endl;
    return 0;
}