#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int i = 1;
    while (i * i < n)
    {
        i++;
    }

    if (i * i == n)
        cout << n << " is a perfect square." << endl;
    else
        cout << n << " is not a perfect square." << endl;

    return 0;
}
