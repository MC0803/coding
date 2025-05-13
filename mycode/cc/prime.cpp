#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime= true;
    cout<<"Enter a number";
    cin>> n;
     for(int i=2;i<n-1;i++)
        if(n%i==0) isprime = false;
    
    isprime?  cout<<n<<" = Not prime": cout<<n<<" = prime";
    cout<<endl;    
     return 0;
}