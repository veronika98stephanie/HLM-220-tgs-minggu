#include <iostream>

using namespace std;

int main()
{
    const double gravitation = 9.8;
    double  weight,
            mass;

    cout << "Please enter the mass " << endl;
    cin >> mass;

    weight = mass * gravitation;

    cout << weight << " newton " << endl;

    if (weight > 1000)
    {
        cout << "It is too heavy " << endl;
    }else if (weight < 10)
    {
        cout << "It is too light " << endl;
    }else
    {
        cout << "Normal" << endl;
    }
    return 0;
}
