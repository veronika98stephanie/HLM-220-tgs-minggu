#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double  distance,
            air = 1100,
            water = 4900,
            steel = 16400;
    int choice;


    cout << "Please choose the medium" << endl;
    cout << "1. air" << endl << "2. water" << endl << "3.steel" << endl;
    cin >> choice;

    cout << fixed << showpoint << setprecision(4) << endl;

    switch (choice)
    {
    case 1:
        cout << "Please enter the distance " << endl;
        while (cin >> distance)
        {
            while (distance < 0)
            {
                cout << "Please enter the right distance " << endl;
                cin >> distance;
            }break;
        }
        cout << "The time is " << distance/air <<endl;
        break;
    case 2:
        cout << "Please enter the distance " << endl;
        while (cin >> distance)
        {
            while (distance < 0)
            {
                cout << "Please enter the right distance " << endl;
                cin >> distance;
            }break;
        }
        cout << "The time is " << distance/water <<endl;
        break;
    case 3:
        cout << "Please enter the distance " << endl;
        while (cin >> distance)
        {
            while (distance < 0)
            {
                cout << "Please enter the right distance " << endl;
                cin >> distance;
            }break;
        }
        cout << "The time is " << distance/steel <<endl;
        break;
    }

    return 0;
}
