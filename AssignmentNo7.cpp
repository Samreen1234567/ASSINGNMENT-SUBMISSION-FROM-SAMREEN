#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:
    void Set_Data(int val1, int val2)
    {
        x = val1;
        y = val2;
    }
    friend Complex Sumcomplex(Complex o1, Complex o2);
    void Get_Data()
    {
        cout << " Complex Number = " << x << " + " << y<< "i" << '\n';
    }
};

Complex Sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.Set_Data((o1.x + o2.x), (o1.y + o2.y));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.Set_Data(4, 5);
    c1.Get_Data();

    c2.Set_Data(3, 6);
    c2.Get_Data();

    sum = Sumcomplex(c1, c2);
    sum.Get_Data();

    return 0;
}
