#include<iostream>
#include<string>
using namespace std;

bool isanagram(string& s1,string& s2){
    int count[25] ={0};
    int n = s1.length();
    for(int i=0; i < n;i++){
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for(int i : count){
        if(i != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 = "anagram";
    string s2 = "nagaram";
    if(s1.length() != s2.length()){
        cout<<"The strings are not anagrams "<<endl;
        return 0;
    }
    cout<< isanagram(s1,s2) << endl;
    return 0;
}