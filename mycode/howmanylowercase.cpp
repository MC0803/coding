#include<iostream>
#include<string>
using namespace std;

int main(){
    string s="Hello World";
    int count =0;
    for(char c : s){
        if(islower(c)){
            count++;
        }
    }
    cout<<"Number of lowercase letters : "<<count<< endl;
    return 0;

}