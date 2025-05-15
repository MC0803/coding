#include<iostream>
using namespace std;
int main(){
    int n,c=1;
    cout<<"Enter number of rows";
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
    return 0;
}