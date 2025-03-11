#include <iostream>
using namespace std;

class CNgay
{
private:
    int ng;
    int th;
    int nm;
public:
    CNgay();
    CNgay(const CNgay &x);
    CNgay(int, int, int);
    ~CNgay();

    CNgay& operator=(const CNgay &x); // Sửa trả về tham chiếu
    friend istream& operator>>(istream &is, CNgay &x);
    friend ostream& operator<<(ostream &os, const CNgay &x);
};

int main()
{
    CNgay a;
    cout << "Nhap ngay a: \n";
    cin >> a;
    cout << "Ngay a: " << a << endl;

    CNgay b(4, 3, 2025);
    cout << "Ngay b: " << b << endl;

    CNgay c(b);
    cout << "Ngay c: " << c << endl;

    return 0;
}

// Constructor mặc định
CNgay::CNgay()
{
    ng = 1;
    th = 1;
    nm = 1;
}

// Constructor sao chép
CNgay::CNgay(const CNgay &x)
{
    ng = x.ng;
    th = x.th;
    nm = x.nm;
}

// Constructor có tham số
CNgay::CNgay(int ngng, int thth, int nmnm)
{
    ng = ngng;
    th = thth;
    nm = nmnm;
}

// Destructor
CNgay::~CNgay()
{
}

// Toán tử nhập
istream& operator>>(istream &is, CNgay &x)
{
    cout << "Ngay: ";
    is >> x.ng;
    cout << "Thang: ";
    is >> x.th;
    cout << "Nam: ";
    is >> x.nm;
    return is;
}

// Toán tử xuất
ostream& operator<<(ostream &os, const CNgay &x)
{
    os << x.ng << "/" << x.th << "/" << x.nm;
    return os;
}

// Toán tử gán =
CNgay& CNgay::operator=(const CNgay &x)
{
    if (this != &x) {
        ng = x.ng;
        th = x.th;
        nm = x.nm;
    }
    return *this;
}
