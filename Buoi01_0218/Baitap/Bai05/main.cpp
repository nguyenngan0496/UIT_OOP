#include <iostream>

using namespace std;

class CPhanSo
{
private:
    int tu, mau;
public:
    void nhapPS();
    void xuatPS();
    float soSanh(CPhanSo P);
};

int main()
{
    CPhanSo A, B;
    A.nhapPS();
    B.nhapPS();
    A.xuatPS();
    B.xuatPS();
    int kq = A.soSanh(B);
    switch (kq)
    {
        case 1: cout << "Phan so A lon hon B"; break;
        case 0: cout << "Hai phan so A va B bang nhau"; break;
        case -1: cout << "Phan so A nho hon B"; break;
    }

    return 0;
}

void CPhanSo::nhapPS()
{
    cout << "Hay nhap tu so: "; cin >> tu;
    do{
        cout << "Hay nhap mau so (>0): "; cin >> mau;
    }while (mau <= 0);
}

void CPhanSo::xuatPS()
{
    printf("Phan so la: %d/%d \n", tu, mau);
}

float CPhanSo::soSanh(CPhanSo P)
{
    if ((tu*P.mau - mau*P.tu) > 0)
        return 1;
    if ((tu*P.mau - mau*P.tu) == 0)
        return 0;
    return -1;

}
