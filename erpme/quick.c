#include <stdio.h>
#include<stdlib.h>

void quickSort(int arr[], int low, int high) {
    if (low >= high) {
        return;
    }  

    int key = arr[low]; 
    int i = low, j = high;
    int tmp;

    while (i < j) {
        
        while (arr[j] > key && i < j) j--;

       
        while (arr[i] <= key && i < j) i++;

        
        if (i < j) {
            tmp=arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
            }

    }

   
    tmp=arr[low];
    arr[low]=arr[i];
    arr[i]=tmp;

   
    quickSort(arr, low, j - 1);  
    quickSort(arr, j + 1, high);
}

int main() {
    int arr[] = {12, 3, 45, 55, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

   
    for (int i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
