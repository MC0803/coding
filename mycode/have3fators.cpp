#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
            if (i * i != n)
            {
                count++; // Count the corresponding factor
            }
        }

        if (count == 3)
        {
            cout << "yes";
        }
        else
        {
            cout << "no";
        }

        return 0;
    }
