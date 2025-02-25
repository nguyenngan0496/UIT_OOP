#include <iostream>

using namespace std;

class CPhanSo
{
private:
    int tu;
    int mau;
public:
    friend istream& operator>>(istream &is, CPhanSo &x);
    friend ostream& operator<<(ostream &os, CPhanSo &x);
};

int main()
{
    CPhanSo ps;
    cout << "Nhap phan so: \n";
    cin >> ps;
    cout << "Phan so vua nhap: " << ps;

    return 0;
}

istream& operator>>(istream &is, CPhanSo &x)
{
    cout << "Nhap tu: ";
    is >> x.tu;
    cout << "Nhap mau: ";
    is >> x.mau;

    return is;
}
ostream& operator<<(ostream &os, CPhanSo &x)
{
    os << x.tu << "/" << x.mau;
    return os;
}
