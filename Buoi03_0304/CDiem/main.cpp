#include <iostream>

using namespace std;

class CDiem
{
private:
    int x, y;
public:
    CDiem();
    CDiem(const CDiem& p);
    CDiem(int, int);
    ~CDiem();

    friend istream& operator>>(istream &is, CDiem &p);
    friend ostream& operator<<(ostream &os, CDiem &p);

    CDiem& operator=(const CDiem &p);
};

int main()
{
    CDiem A;
    cout << A;

    CDiem B = A;
    cout << B;

    CDiem C(3,5);
    cout << C;

    CDiem d;
    d = C;
    cout << d;

    return 0;
}

ostream& operator<<(ostream &os, CDiem &p)
{
    cout << "\nToa do diem la: (" << p.x << "; " << p.y << ")";

    return os;
}

CDiem::CDiem()
{
    x = 0;
    y = 0;
}

CDiem::CDiem(const CDiem &p)
{
    x = p.x;
    y = p.y;
}

CDiem::CDiem(int xx, int yy)
{
    x = xx;
    y = yy;
}

CDiem::~CDiem()
{
}

CDiem& CDiem::operator=(const CDiem &p)
{
    if(this != &p)
    {
        x = p.x;
        y = p.y;
    }
    return *this;
}
