#include<iostream>
using namespace std;

int main(){
    int l,b;
    cout<<"Enter length and breadth of rectangle";
    cin>>l>>b;
    for(int i=1 ; i<=b ; i++){
       for(int j=1; j<=l ;j++){
          if(j==1 || j==l || i==1 || i==b){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
       }
       cout<<endl;
    }
    return 0;
}