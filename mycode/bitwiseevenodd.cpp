#include <iostream>
using namespace std;

void biteo(int n)
{
    if (!(n & 1))
    {
        cout << "Number is even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    biteo(n);
    return 0;
}