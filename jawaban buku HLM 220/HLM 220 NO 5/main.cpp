#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double  weight,
            height,
            bodyMassIndex;

    cout << "Please input your weight and height" << endl;
    cin >> weight >> height;

    bodyMassIndex = weight * 703 / pow (height, 2);

    if (bodyMassIndex < 18.5)
    {
        cout << "Underweight" << endl;
    }else if (bodyMassIndex > 18.5 && bodyMassIndex < 25)
    {
        cout << "Optimal " << endl;
    }else
    {
        cout << "Overweight" << endl;
    }

    return 0;
}
