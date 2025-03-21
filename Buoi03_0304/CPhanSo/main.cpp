#include <iostream>

using namespace std;
class CPhanSo
{
private:
    int tu;
    int mau;
public:
    CPhanSo();
    CPhanSo(const CPhanSo &x);
    CPhanSo(int t, int m);
    friend istream& operator>>(istream &is, CPhanSo &x);
    friend ostream& operator<<(ostream &os, CPhanSo &x);

    CPhanSo& operator=(const CPhanSo &other);
};
int main()
{
    CPhanSo a;
    cin >> a;
    cout << "\Phan so: " << a;
    CPhanSo b(a);
    cout << "\n Phan so b: " << b;
    CPhanSo c(5,6);
    cout << "\n Phan so b: " << c;
    return 0;
}
CPhanSo::CPhanSo()
{
    tu = 0;
    mau = 1;
};
CPhanSo::CPhanSo(const CPhanSo &x)
{
    tu = x.tu;
    mau = x.mau;
};
CPhanSo::CPhanSo(int t, int m)
{
    tu = t;
    mau = m;
};
istream& operator>>(istream &is, CPhanSo &x)
{
    cout << "Tu =";
    is >> x.tu;
    cout << "Mau =";
    is >> x.mau;
    return is;
};
ostream& operator<<(ostream &os, CPhanSo &x)
{
    os << x.tu << "/" << x.mau;
    return os;
};

CPhanSo& CPhanSo::operator=(const CPhanSo &other)
{
    if (this != &other)
    {
        tu = other.tu;
        mau = other.mau;
    }
    return *this;
}

