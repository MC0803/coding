#include<iostream>
#include<string>
using namespace std;

int main(){
string s;
getline(cin,s);
if(s.empty()){
    cout<<"Empty String"<<endl;
}else{
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
}
return 0;
}