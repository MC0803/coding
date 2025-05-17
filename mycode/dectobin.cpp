#include<iostream>
using namespace std;
void Dectobin(int n){
  int bin=0;
  int i=1;
  while(n>0){
    int rem=n%2;
    bin += (rem*i);
    i=i*10;
    n=n/2;
  }
  cout<< bin;
}
int main(){
    int n;
    cout<<"Enter number to convert ";
    cin>>n;
     Dectobin(n);
    return 0;
}