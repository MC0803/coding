#include<iostream>
using namespace std;

bool Isprime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    } 

    return true;

}
int main(){
    int n;
    cout<<"Enter number to check";
    cin>>n;
    cout<<"Prime = 1 nonprime = 0 "<<endl;
    cout<< Isprime(n) <<endl;
    return 0;
}
