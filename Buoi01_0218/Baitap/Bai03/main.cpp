#include <iostream>
#include <cmath>

using namespace std;

class CToaDo
{
private:
    int x, y, z;
public:
    void nhapToaDo();
    void xuatToaDo();
    float tinhKhoangCach(CToaDo P);
};

int main()
{
    CToaDo A, B;
    A.nhapToaDo();
    B.nhapToaDo();
    A.xuatToaDo();
    B.xuatToaDo();

    cout << "Khoang cach giua A va B la: " << A.tinhKhoangCach(B) << endl;

    return 0;
}

void CToaDo::nhapToaDo()
{
    cout << "Hay nhap diem x: "; cin >> x;
    cout << "Hay nhap diem y: "; cin >> y;
    cout << "Hay nhap diem z: "; cin >> z;
}

void CToaDo::xuatToaDo()
{
    printf("Toa do cua diem la: (%d;%d;%d)\n", x, y, z);
}

float CToaDo::tinhKhoangCach(CToaDo P)
{
    return sqrt((pow(x-P.x,2)+pow(y-P.y,2)+pow(z-P.z,2)));
}
