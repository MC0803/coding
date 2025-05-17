#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number to convert";
    cin>>n;
    int dec=0;
    int i=1;
    while(n > 0){
        int rem=n%10;
        dec += (rem*i);
        i=i*2;
        n=n/10;
    }
    cout<<dec;
}