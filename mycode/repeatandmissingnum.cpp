#include <iostream>
#include <vector>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    int n = grid.size();
    int a = 0, b = 0;
    vector<int> freq(n * n + 1, 0);

    for (auto &row : grid)
    {
        for (int e : row)
        {
            freq[e]++;
        }
    }

    for (int i = 1; i <= n * n; i++)
    {
        if (freq[i] == 2)
            a = i;
        if (freq[i] == 0)
            b = i;
    }

    return {a, b};
}
