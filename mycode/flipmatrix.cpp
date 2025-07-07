#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printMatrix(vector<vector<int>>& matrix);



void flip90clockwise(vector<vector<int>>& matrix){
 int n = matrix.size();
 int top = 0;
 int bottom = n-1;
 // here we flip rows ie. bottom row is top row and so on
  while(top<bottom){
    swap(matrix[top],matrix[bottom]);
    top++;
    bottom--;
  }
  // now we transpose marix
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  printMatrix(matrix);
  // now we have flipped the matrix 90 degrees clockwise
}

void flip90anticlockwise(vector<vector<int>>& matrix){
  int n = matrix.size();

  // we trnspose the matrix
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      swap(matrix[i][j],matrix[j][i]);
    }
  }
  // now we flip rows ie. bottom row is top row and so on
  for (int j = 0; j < n; j++) {
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
  printMatrix(matrix);
  
 // now we have flipped the matrix 90 degrees anticlockwise
 /// appears same as original as we are manipulating the same matrix :)
}

void flip180(vector<vector<int>>& matrix){
  int n= matrix.size();
  //swap rows ie. top row is bottom row and so on
  int top = 0;
 int bottom = n-1;
  while(top<bottom){
    swap(matrix[top],matrix[bottom]);
    top++;
    bottom--;
  }

  // now we reverse each row
  for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
  // now we have flipped the matrix 180 degrees
  printMatrix(matrix);
}

void printMatrix(vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    cout << endl;
  }

int main(){
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
  cout<< "Original Matrix:" << endl;
  printMatrix(matrix);
  cout << "Matrix after flipping 90 degrees clockwise:" << endl;  
  flip90clockwise(matrix);
  cout << "Matrix after flipping 90 degrees anticlockwise:" << endl;
  flip90anticlockwise(matrix);
  cout << "Matrix after flipping 180 degrees:" << endl;
  flip180(matrix);
  return 0;
}