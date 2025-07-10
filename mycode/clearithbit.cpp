#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Enter position to clear: ";
    cin>>i;
    int mask = ~(1 << i);
    n = n & mask;
    cout<< "Number after clearing" << n << endl;
    return 0;
}