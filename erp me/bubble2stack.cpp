#include<iostream>
using namespace std;


void push(int stk[], int arr[], int n);
void pop(int stk[], int n);
void sort(int arr[], int n);

int main() {
    int arr[] = {12, 4, 45, 55, 18, 9};
    int stk[6];  
    int n = 6; 

    sort(arr, n);

    
    push(stk, arr, n);

   
    pop(stk, n);

    return 0;
}


void sort(int arr[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}


void push(int stk[], int arr[], int n) {
    for (int i = 0; i < n; i++) {
        stk[i] = arr[i];  
}
}

void pop(int stk[], int n) {
    for (int i = 0; i < n; i++) {
        cout << stk[i] << " "; 
    cout << endl;
   }
}