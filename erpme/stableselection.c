#include <stdio.h>

int main() {
    int arr[] = {12, 3, 45, 8, 18};
    int n, i, j, minI, key;

    n = sizeof(arr)/sizeof(int);

    for (i = 0; i < n - 1; i++) {
        minI =i;
         for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minI]) {
                minI= j;
            }
        }

        key = arr[minI];
        while (minI > i) {
            arr[minI] = arr[minI - 1];
            minI--;
        }
        arr[i] = key;
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf(" %d ", arr[i]);
    }

    return 0;
}
