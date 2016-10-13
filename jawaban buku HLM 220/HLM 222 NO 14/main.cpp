#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double  balance,
            numOfCheck,
            total;


    cout << "Please enter the beginning balance " << endl;
    cin >> balance;

    if (balance < 0)
    {
        cout << "The account is overdrawn" << endl;
        exit(1);
    }

    cout << "Please enter number of check(s)" << endl;
    while (cin >> numOfCheck)
    {
        while ( numOfCheck < 0)
        {
            cout << "Please enter the right number " << endl;
            cin >> numOfCheck;
        }break;
    }



    if ( balance < 400 )
    {
        total = 15 + 10;
    }else
    {
        total = 10;
    }

    if (numOfCheck <20)
    {
        cout << "The bank's service fees for the month " << total + 0.1 * numOfCheck << endl;
    }else if (numOfCheck >= 20 && numOfCheck <= 39)
    {
        cout << "The bank's service fees for the month " << total + 0.8 * numOfCheck << endl;
    }else if (numOfCheck >= 40 && numOfCheck <= 59)
    {
        cout << "The bank's service fees for the month " << total + 0.6 * numOfCheck << endl;
    }else
    {
        cout << "The bank's service fees for the month " << total + 0.4 * numOfCheck << endl;
    }

    return 0;
}
