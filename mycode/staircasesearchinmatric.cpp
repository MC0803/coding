#include<iostream>
using namespace std;
 void staircaseright(int mat[][4],int n, int m, int key){
    int row = 0, col = m-1; // start from top right corner
    while(row<n && col>=0){
        if(mat[row][col]==key){
            cout<<"right corner start--Element found at location:" <<"[ " << row <<" , "<<col<<" ]"<<endl;
            return;
        }
        else if(mat[row][col]>key){
            col--;
        }
        else{
            row++;
        }
    }

 }
 void staircaseleft(int mat[][4],int n, int m, int key){
    int row = n-1, col = 0; // start from bottom left corner
    while(col<m && row>=0){
        if(mat[row][col]==key){
            cout<<" left corner start-- Element found at location:" <<"[ " <<row <<" , "<<col<<" ]"<<endl;
            return;
        }
        else if(mat[row][col]>key){
            row--;
        }
        else{
            col++;
        }
    }
   
 }



int main(){
    int mat[4][4]={
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    staircaseright(mat,4,4,key);
    staircaseleft(mat,4,4,key);

}