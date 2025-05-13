/* Given weights and profits of N items {P,W} 60 10 100 20 120 30 W=50 */
#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    float weight[50], profit[50], ratio[50], totalvalue = 0, capacity = 0;
    int n, i, j;
    
    cout << "Enter the number of items: ";
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cout << "Enter weight and profit of item " << (i + 1) << ":" << endl;
        cin >> profit[i];
        cin >> weight[i];
        ratio[i] = profit[i] / weight[i];
    }
    
    cout << "Enter knapsack capacity: ";
    cin >> capacity;
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                swap(ratio[i], ratio[j]);
                swap(weight[i], weight[j]);
                swap(profit[i], profit[j]);
            }
        }
    }
    
    for (i = 0; i < n; i++) {
        if (weight[i] > capacity) {
            continue;
        } else {
            totalvalue += profit[i];
            capacity -= weight[i];
        }
    }
    
    if (i < n) {
        totalvalue += (ratio[i] * capacity);
    }
    
    cout << "Total value in knapsack is: " << totalvalue << endl;
    
    return 0;
}
