#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    int arr[10000];
    cout << "Enter length of array to sort ";
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maxele = INT_MIN, minele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxele = max(maxele, arr[i]);
        minele = min(minele, arr[i]);
    }
    int freq[10000];

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for (int i = minele; i <= maxele; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}