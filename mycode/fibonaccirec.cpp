#include <iostream>
using namespace std;

int fiboprint(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fiboprint(n - 1) + fiboprint(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << " " << fiboprint(n) << endl;

    return 0;
}