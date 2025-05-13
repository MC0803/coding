#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int k,n,maxi,i,sum=0;
    int price[100];
    string line;
    getline(cin,line);
    n=line.length();
    cout<<"k= ";
    cin>>k;

   
    for(i=n;i>=0;i--){
          price[i]= line[i] - '0'; 
    }

    
    for(i=n; i>0; i-=k){
        if(i==0){
            break;
        }
        while(k!=0 && i > 0){ 
           maxi= max(price[i-1], price[i-2]); 
           if(price[i] > maxi){
               sum = sum + (maxi - price[i]);
               k--;
           }
           i--; 
        }
    }
    cout<<sum;
    return 0;
}
