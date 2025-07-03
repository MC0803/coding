#include<iostream>
using namespace std;

void diagonalsum(int mat[][4], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
             sum+=mat[i][j];
            }else if(j==n-i-1){ // for secondary diagonal i.e. anti-diagonal the other tilt also included
                sum+=mat[i][j];
            }

        }
    }
    cout<<"Diagonal sum is: "<<sum<<endl;
};

void diagonalopt(int mat[][4], int n, int m){

     int sum=0;
     for(int i=0;i<n;i++){
        sum+=mat[i][i]; //primary diagonal
        if(i != n-i-1){ // to avoid double counting the middle element in case of odd n
            sum+=mat[i][n-i-1]; //secondary diagonal

        }
     }
     cout<<"diagonal sum is: "<<sum<<endl;
};


int main(){
    int mat[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    diagonalsum(mat, 4, 4);
    diagonalopt(mat, 4, 4);
    return 0;
}