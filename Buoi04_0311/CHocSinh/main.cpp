#include <iostream>
#include <string.h>

using namespace std;
class CHocSinh
{
private:
    char hoten[31];
    int toan;
    int van;
    float dtb;
public:
    CHocSinh();
    CHocSinh(const CHocSinh &);
    ~CHocSinh();

    friend istream& operator>>(istream &is, CHocSinh &x);
    friend ostream& operator<<(ostream &os, CHocSinh &x);
    int operator>(CHocSinh);
    int operator<(CHocSinh);
    int operator==(CHocSinh);
    int operator!=(CHocSinh);

};
int main()
{
    CHocSinh x, y;
    cout << "Nhap hoc sinh x: \n";
    cin >> x;

    cout << "Nhap hoc sinh y: \n";
    cin >> y;

    cout << "\n\nHoc sinh x: \n" << x;
    cout << "\n\nHoc sinh y: \n" << y;

    if(x < y)
        cout << "\n x < y";
    if(x > y)
        cout << "\n x > y";
    if(x == y)
        cout << "\n x == y";
    if(x != y)
        cout << "\n x != y";

    return 0;
}

CHocSinh::CHocSinh()
{
    strcpy(hoten, "Unknown");
    toan = 0;
    van = 0;
    dtb = 0;
}

CHocSinh::CHocSinh(const CHocSinh &x)
{
    strcpy(hoten, x.hoten);
    toan = x.toan;
    van = x.van;
    dtb = x.dtb;
}

CHocSinh::~CHocSinh()
{
    return;
}

istream& operator>>(istream &is, CHocSinh &x)
{
    cout << "Ho ten: ";
    fflush(stdin);
    gets(x.hoten);
    cout << "Toan: ";
    is >> x.toan;
    cout << "Van: ";
    is >> x.van;
    x.dtb = (float)(x.toan + x.van)/2;

    return is;
}

ostream& operator<<(ostream &os, CHocSinh &x)
{
    os << "\nHo ten: " << x.hoten;
    os << "\nToan: " << x.toan;
    os << "\nVan: " << x.van;
    os << "\nDTB: " << x.dtb;

    return os;
}

int CHocSinh::operator>(CHocSinh x)
{
    if(dtb > x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator<(CHocSinh x)
{
    if(dtb < x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator==(CHocSinh x)
{
    if(dtb == x.dtb)
        return 1;
    return 0;
}

int CHocSinh::operator!=(CHocSinh x)
{
    if(dtb != x.dtb)
        return 1;
    return 0;
}
