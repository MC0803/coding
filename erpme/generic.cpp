#include <iostream>
using namespace std;

template <typename T>
T mymax(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

int main()
{
    int x = 10;
    int y = 20;
    float h = 70.0;
    float g = 50.0;

    cout << "Larger is " << mymax(x, y) << endl;
    cout << "Greater is " << mymax(h, g);

    return 0;
}