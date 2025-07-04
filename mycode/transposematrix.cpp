#include<iostream>
using namespace std;

void transpose(int (*mat)[3],int n, int m){
  int trans[3][2];
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        trans[i][j] = mat[j][i];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout << trans[i][j] <<" ";
    }
    cout << endl;
  }


}

int main(){
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
  transpose( mat,2,3);
    return 0;
}