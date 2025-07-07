#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s1= "bank";
    string s2 = "kanb";
    if(s1.length() != s2.length()){
        cout<<"The strings are not equal"<<endl;
        return 0;
    }
    int left = 0;
    int right = s1.length()-1;
    while(left < right){
        if(s1 == s2){
            cout<<"Strings are equal"<<endl;
            break;
        }
        else if(s1[left] == s2[left] && s1[right] == s2[right]){
            left++;
            right--;
        }else{
            swap(s2[left],s2[right]);
            left++;
            right--;

        }

    }
}
