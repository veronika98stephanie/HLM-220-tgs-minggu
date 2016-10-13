#include <iostream>

using namespace std;

int main()
{
    double  retail = 99 ,
            units,
            cost;

    cout << "Please enter number of units " << endl;
    while (cin >> units)
    {
        while (units <= 0)
        {
            cout << "Please enter the right number " << endl;
            cin >> units;
        }break;
    }

    cost = 99*units;

    if (units >=10 && units <=19)
    {
        cout << "$" << cost-cost*20/100 << endl;
    }else if (units >=20 && units <=49)
    {
        cout << "$" << cost-cost*30/100 << endl;
    }else if (units >=50 && units <=99)
    {
        cout << "$" << cost-cost*40/100 << endl;
    }else
    {
        cout << "$" << cost-cost*50/100 << endl;
    }

    return 0;
}
