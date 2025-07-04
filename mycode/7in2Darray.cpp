#include<iostream>
using namespace std;
void fun(int arr[][3],int n,int m){
   int count = 0;
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
              if(arr[i][j] == 7){
                count++;
              }
         }
    }
    cout<<"Number of 7 in matrix :" << count << endl;
}

int main(){
    int arr[2][3]={
        {4,7,8},
        {8,8,7}
    };
    fun(arr,2,3);
    return 0;
}