#include <iostream>

using namespace std;

int main()
{
    int month,
        year;

    cout << "Please enter the month from 1-12 " << endl;
    while (cin >> month)
    {
        if (month < 1 || month > 12)
        {
            cout << "Please enter the right month" << endl;
            cin >> month;
        }break;
    }
    cout << "Please enter the years" << endl;
    cin >> year;

    if (year % 100 == 0 && year % 400 == 0 && month == 2)
    {
        cout << "29 days" << endl;
    }else if (year % 100 != 0 && year % 4 == 0 && month == 2)
    {
        cout << "29 days" << endl;
    }else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        cout << "31 days" << endl;
    }else
    {
        cout << "30 days" << endl;
    }

    return 0;
}
