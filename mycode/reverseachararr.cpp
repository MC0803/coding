#include<iostream>
using namespace std;

int main(){
    char arr[] = {'H','e','l','l','o'};
    int n= sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1; // n-1 is the last index, so we use n-2 to avoid null character at the end
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<< "Reversed array: ";
    cout << arr <<endl;
    return 0;
}