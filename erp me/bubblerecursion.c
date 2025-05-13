#include<stdio.h>
#include<stdlib.h>

void sort(int arr[], int n) {
    if (n <= 1)
        return;

    
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int tmp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = tmp;
        }
    }
    sort(arr, n - 1);
}

int main(){
    int i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("Sorted elements: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
