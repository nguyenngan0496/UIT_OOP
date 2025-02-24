#include <iostream>

using namespace std;

class CDate
{
private:
    int day, month, year;
public:
    void inDate();
    void outDate();
    bool isLeapYear();
    int dayOfMonth();
    void findNextDay();

};

int main()
{
    CDate d;
    d.inDate();
    d.findNextDay();
    d.outDate();

    return 0;
}

void CDate::inDate()
{
    cout << "Nhap ngay: "; cin >> day;
    cout << "Nhap thang: "; cin >> month;
    cout << "Nhap nam: "; cin >> year;
}

void CDate::outDate()
{
    printf("Ngay ke tiep la: %d/%d/%d", day, month, year);
}

bool CDate::isLeapYear()
{
    if ((year%4 == 0 && year%100 != 0) || year%400 ==0)
        return true;
    return false;
}

int CDate::dayOfMonth()
{
    switch(month)
    {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear() ? 29 : 28;
    default:
        return 31;
    }
}

void CDate::findNextDay()
{
    day++;

    if (day > dayOfMonth())
    {
        day = 1;
        month++;

        if (month > 12)
        {
            month = 1;
            year++;
        }
    }
}
