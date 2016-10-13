#include <iostream>

using namespace std;

int main()
{
    double  weight,
            distance;


    cout << "Please input the weight " << endl;
    while (cin >> weight)
    {
        while (weight <= 0 || weight > 20)
        {
            cout << "Please input the right weight " << endl;
            cin >> weight;
        }break;
    }
    cout << "Please input the distance " << endl;
    while (cin >> distance)
    {
        while (distance < 10 || distance > 3000)
        {
            cout << "Please input the right distance " << endl;
            cin >> distance;
        }break;
    }

    if (weight <= 2)
    {
        cout << "The cost is $" << distance/500 * 1.10 << endl;
    }else if (weight > 2 && weight <= 6)
    {
        cout << "The cost is $" << distance/500 * 2.20 << endl;
    }else if (weight > 6 && weight <= 10)
    {
        cout << "The cost is $" << distance/500 * 3.70 << endl;
    }else
    {
        cout << "The cost is $" << distance/500 * 4.80 << endl;
    }

    return 0;
}
