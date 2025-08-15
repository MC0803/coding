#include <iostream>
using namespace std;

int cleartillij(int n, int i, int j)
{
    int mask1 = (1 << i) - 1;          // Mask for bits before i
    int mask2 = ~((1 << (j + 1)) - 1); // Mask for bits after j
    int mask = mask1 | mask2;          // Combine masks
    return n & mask;                   // Clear bits from i to j
}
int main()
{
    int n, i, j;
    cin >> n;
    cin >> i;
    cin >> j;
    cout << cleartillij(n, i, j) << endl;
    ;
}
