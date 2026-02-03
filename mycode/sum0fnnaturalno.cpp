#include <iostream>
using namespace std;

int recsum(int n)
{
    if (n == 0)
        return 0;
    return n + recsum(n - 1);
}

int main()
{

    int n;
    cin >> n;
    cout << recsum(n);
    return 0;
}
