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
    void findPreviousDay();
};

int main()
{
    CDate d;
    d.inDate();
    d.findPreviousDay();
    d.outDate();

    return 0;
}

void CDate::inDate()
{
    cout << "Hay nhap ngay: "; cin >> day;
    cout << "Hay nhap thang: "; cin >> month;
    cout << "Hay nhap nam: "; cin >> year;
}

void CDate::outDate()
{
    printf("Ngay truoc do la: %d/%d/%d", day, month, year);
}

bool CDate::isLeapYear()
{
    if ((year%4 == 0 && year%100 != 0) || year%400 == 0)
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

void CDate::findPreviousDay()
{
    day--;

    if (day == 0)
    {
        month--;
        day = dayOfMonth();

        if (month == 0)
        {
            year--;
        month = 12;
        day = 31;
        }
    }

}
