#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int hours1,
        minutes1,
        minutes2;

        cout << "Please input the hours and minutes" << endl;
        while (cin >> hours1)
        {
            while ( hours1 > 23 )
            {
                cout << "Please enter the right hour " << endl;
                cin >> hours1;
            }break;
        }
        while (cin >> minutes1)
        {
            while ( minutes1 > 59 )
            {
                cout << "Please enter the right minutes " << endl;
                cin >> minutes1;
            }break;
        }

        cout << setw(2);
        cout.fill('0');
        cout << hours1 << ":" << minutes1 <<endl;

        cout << "How many minutes ??" << endl;
        cin >> minutes2;

        if ( hours1 >= 00 && minutes1 >=00 && hours1 <= 6 && minutes1 <=59 )
        {
            cout << "The rate is " << 0.05*minutes2;
        }else if ( hours1 >= 19 && minutes1 >=01 && hours1 <= 23 && minutes1 <=59 )
        {
            cout << "The rate is " << 0.20*minutes2;
        }else if ( hours1 >= 07 && minutes1 >=00 && hours1 <= 19 && minutes1 <=00 )
        {
            cout << "The rate is " << 0.45*minutes2;
        }


    return 0;
}
