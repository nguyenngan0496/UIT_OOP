#include <iostream>

using namespace std;

class CDiem
{
private:
    int x, y;
public:
    friend istream& operator>>(istream& is, CDiem& p);
    friend ostream& operator<<(ostream& os, CDiem& p);
};
int main()
{
    CDiem* p = new CDiem();
    CDiem A;
    cin >> A;
    cout << A;
    return 0;
}

istream& operator>>(istream& is, CDiem& p)
{
    cout << "Hay nhap x: ";
    is >> p.x;
    cout << "Hay nhap y: ";
    is >> p.y;

    return is;
}

ostream& operator<<(ostream& os, CDiem& p)
{
    os << "(" << p.x << ", " << p.y << ")";

    return os;
}
