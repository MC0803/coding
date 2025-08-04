#include <iostream>
using namespace std;

template <typename T>
bool isthere(T a[], T sc, int l)
{
    int t = 0;
    for (int i = 0; i < l; i++)
    {
        if (a[i] == sc)
        {
            t = 1;
            break;
        }
    }
    if (t == 0)
        return 0;
    else
        return 1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int a1 = 4;
    int l1 = sizeof(a) / sizeof(a1);
    // Float array
    float b[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f};
    float b1 = 5.0f;
    int l2 = sizeof(a) / sizeof(b1);
    // Double array
    double c[] = {1.1, 2.2, 3.3, 4.4};
    double c1 = 3.3;
    int l3 = sizeof(a) / sizeof(c1);

    cout << "\nFor int arr " << isthere(a, a1, l1);
    cout << "\nFor float arr " << isthere(b, b1, l2);
    cout << "\nFor double arr " << isthere(c, c1, l3);
    return 0;
}