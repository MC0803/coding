#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int img;

    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex &c2)
    {
        int r = this->real + c2.real;
        int i = this->img + c2.img;
        return Complex(r, i);
    }
};

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    cout << c3.real << "+" << c3.img << "i" << endl;
    return 0;
}
