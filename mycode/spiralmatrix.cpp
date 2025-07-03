#include<iostream>
using namespace std;


void spiralPrint(int mat[][4], int n, int m){
    int srow= 0, erow = n-1, scol = 0,ecol = m-1;
   while(srow<=erow && scol<=ecol){
    //top
    for(int i=scol ; i<=ecol ; i++){
        cout<<mat[srow][i]<<" ";
    }
    //right
    for(int j=srow+1 ; j<=erow ; j++){
        cout<<mat[j][ecol]<<" ";
    }
    //bottom
    for(int i=ecol-1 ; i>=scol ; i--){
        if(srow==erow) break; // to avoid printing the same row again
        cout<<mat[erow][i]<<" ";
    }
    //left
    for(int j=erow-1 ; j>=srow+1 ; j--){
        if(scol==ecol) break; // to avoid printing the same column again
        cout<<mat[j][scol]<<" ";
    }
    srow++;
    erow--;
    scol++;
    ecol--;
   }


}
int main(){
    int mat[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiralPrint(mat, 4, 4);
}