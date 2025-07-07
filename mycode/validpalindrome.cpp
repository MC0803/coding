#include<iostream>
using namespace std;

int main(){
    char arr[] = "racecar";
    int n = sizeof(arr)/sizeof(arr[0]) - 1; // Exclude the null terminator
    int start = 0;
    int end = n-1;
    bool isPalindrome = true;
    while(start < end){
        if(arr[start] != arr[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if(isPalindrome){
        cout<<"The "<<arr<<" is a Palindrome"<<endl;
    }else{
        cout<<"The "<<arr<<" is not a Palindrome"<<endl;
    }
    return 0;

}