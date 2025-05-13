/* buy all candies in maximium,mimimum prices
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    float p[50],amt=0,min=0,max=0;
    int n,i,k,j;
    cout<<"Enter number of candies";
    cin>>n;
    cout<<"Enter price of each ";
    for(i=0;i<n;i++){
     cin>>p[i];
    }
    cout<<"k= ";
    cin>>k;
    amt=n;
   sort(p,p+n);
   i=0;
   j=n-1;
   while(amt>0){
     min+=p[i++];
     max+=p[j--];
     amt-=(k+1);
   }
   cout<<" Max= "<<max<<" Min= "<<min<<endl;
return 0;
}