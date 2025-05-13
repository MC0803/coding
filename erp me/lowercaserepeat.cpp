#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s;
    int i,j;
    cin>>s;
    int n=s.length();
i=0;
j=n-1;
while(i<j){
    if(s[i]!=s[j]){
        swap(s[i],s[j]);
        i++;
        j--;
}
cout<<s<<endl;
return 0;
}
}