#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> a, int n, int i, int target)
{
    if (i == n - 1)
        return 0;
    if (a[i] == target)
        return i;
    return firstOcc(a, n, i + 1, target);
}

int main()
{
    vector<int> a{1, 2, 3, 3, 3, 4, 5};
    int t = 3;
    int n = a.size();
    cout << firstOcc(a, n, 0, t) << endl;
    return 0;
}
