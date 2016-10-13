#include <iostream>

using namespace std;

int main()
{
    double  time,
            carbonDioxide = 258,
            air = 331.5,
            helium = 972,
            hydrogen = 1270;

    int choice;

    cout << "Please choose the medium" << endl;
    cout << "1. Carbon Dioxide" << endl << "2. Air" << endl << "3. Helium" << endl << "4. Hydrogen" << endl ;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Please enter the time " << endl;
        while (cin >> time)
        {
            while (time < 0 || time > 30)
            {
                cout << "Please enter the right time " << endl;
                cin >> time;
            }break;
        }
        cout << "The distance is " << time * carbonDioxide <<endl;
        break;
    case 2:
        cout << "Please enter the time " << endl;
        while (cin >> time)
        {
            while (time < 0 || time > 30)
            {
                cout << "Please enter the right time " << endl;
                cin >> time;
            }break;
        }
        cout << "The distance is " << time * air <<endl;
        break;
    case 3:
        cout << "Please enter the time " << endl;
        while (cin >> time)
        {
            while (time < 0 || time > 30)
            {
                cout << "Please enter the right time " << endl;
                cin >> time;
            }break;
        }
        cout << "The distance is " << time * helium <<endl;
        break;
    case 4:
        cout << "Please enter the time " << endl;
        while (cin >> time)
        {
            while (time < 0 || time > 30)
            {
                cout << "Please enter the right time " << endl;
                cin >> time;
            }break;
        }
        cout << "The distance is " << time * hydrogen <<endl;
        break;
    }

    return 0;
}
