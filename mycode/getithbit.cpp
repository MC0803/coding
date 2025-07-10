#include<iostream>
using namespace std;

int  main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int i;
    cout<<"Enter the position of hte bit needed";
    cin>>i;
    int mask = 1 << i; // Create a mask with 1 at the ith position
    
    if(!(n&mask)){
        cout<<"The bit is 0"<<endl;
    }
    else{
        cout<<"Bit is 1"<<endl;
    }
}
