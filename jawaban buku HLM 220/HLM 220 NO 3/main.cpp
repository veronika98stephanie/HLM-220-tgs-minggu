#include <iostream>

using namespace std;

int main()
{
    int month,
        date,
        year;


    cout << "Please input the month in number" << endl;
    cin >> month;
    cout << "Please input the date" << endl;
    cin >> date;
    while ( month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
    {
        if (date < 1 || date > 31)
        {
            cout << "Please enter the right date " << endl;
            cin >> date;
        }else
        {
            break;
        }
    }
    while ( month == 2 )
    {
        if (date < 1 || date > 29)
        {
            cout << "Please enter the right date " << endl;
            cin >> date;
        }else
        {
            break;
        }
    }
    while ( month == 4 || month == 6 || month == 9 || month == 11 )
    {
        if (date < 1 || date > 30)
        {
            cout << "Please enter the right date " << endl;
            cin >> date;
        }else
        {
            break;
        }
    }
    cout << "Please input a two digits year" << endl;

    while (cin >> year)
    {
        if (year < 00 || year > 99)
        {
        cout << "Please enter the right number" << endl;
        cin >> year;
        }
        else
        {
            break;
        }
    }

    cout << date << "/" << month << "/" << year << endl;
    if (year == date*month)
    {
        cout << "Date is magic" << endl;
    }else
    {
        cout << "Date is not magic" << endl;
    }


    return 0;
}
