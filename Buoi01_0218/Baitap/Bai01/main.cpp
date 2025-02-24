#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

class CPhanSo
{
	private:
		int tu;
		int mau;
	public:
		void nhapPS();
		void xuatPS();
		int xetDau();
};

int main()
{
    CPhanSo a;
    a.nhapPS();
    a.xuatPS();
    int kq = a.xetDau();

    switch(kq)
    {
        case 1: cout << "\nPhan so la duong";
        break;

        case -1: cout << "\nPhan so la am";
        break;

        case 0: cout << "\nPhan so la 0";
        break;
    };


    return 0;
}

void CPhanSo::nhapPS()
{
	int tu, mau;
	cout << "Nhap tu so: "; cin >> this->tu;
	cout << "Nhap mau so: "; cin >> this->mau;
}

void CPhanSo::xuatPS()
{
    printf("\nPhan so: %d/%d", tu, mau);
};

int CPhanSo::xetDau()
{
    if (tu*mau > 0)
        return 1;
    if (tu*mau < 0)
        return -1;
    if (tu*mau == 0)
        return 0;

return 0;
}
