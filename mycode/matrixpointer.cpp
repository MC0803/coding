#include<iostream>
using namespace std;

void fun1(int mat[][4]){
    // showing that mat is pointer 
    //and how +1 works with it
    cout<<"0th row of matrix address :"<<mat<<endl;
    cout<<"1st row of matrix address :"<<mat+1<<endl;
    cout<<"2nd row of matrix address :"<<mat+2<<endl;   
    cout<<"3rd row of matrix address :"<<mat+3<<endl;
    cout<<endl;
    
}

void fun2(int (*mat)[4]){
    // showing that the passing is of same matrix as above 
    //and we DE-REFERENCE the pointer to get the row value
    cout<<"0th row of matrix value :"<< *mat <<endl;
    cout<<"1st row of matrix value :"<< *(mat+1) <<endl;
    cout<<"2nd row of matrix value :"<< *(mat+2) <<endl;   
    cout<<"3rd row of matrix value :"<< *(mat+3) <<endl;
    cout<<endl;
    
}

void fun3(int mat[][4],int i,int j){
  // to access element say i,j
  cout<< * ( * ( mat + i) + j ) << endl;
}

int main(){
 int mat[4][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    fun1(mat);
    fun2(mat);
    fun3(mat,2,2);
    return 0;
}