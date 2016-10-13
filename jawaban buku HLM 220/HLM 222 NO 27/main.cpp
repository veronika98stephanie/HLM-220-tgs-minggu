#include <iostream>
#include <string>

using namespace std;

    int searchList(string month[], int SIZE, string months);

int SIZE = 12;

int main()
{

    int number,
        minutes;

    string month [SIZE] = {"january", "february", "march",
                            "april", "may", "june", "july",
                            "august", "september", "october",
                            "november", "december"};
    string months;
    int days [SIZE] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int hours[SIZE] = {744, 672, 744, 720, 744, 720, 744, 744, 720, 744, 720, 744};

    cout << "Please enter name month" << endl;
    cin >> months;

    number = searchList(month, SIZE, months);

    cout << "Please input the minutes " <<endl;
    cin >> minutes;

    if (minutes > hours[number]*60)
    {
        cout << "Validation failed" << endl;
    }else
    {
        cout << "Validation completed " << endl;
    }

    return 0;
}

    int searchList(string month[], int SIZE, string months)
    {
        int index = 0;
        int position = 0;

        while (index < SIZE)
        {
            if (month[index] == months)
            {
                position = index;
            }
        index++;
        }
        return position;
    }
