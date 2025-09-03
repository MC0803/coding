#include <iostream>
using namespace std;

int sumrec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumrec(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << sumrec(n) << endl;
    return 0;
}
