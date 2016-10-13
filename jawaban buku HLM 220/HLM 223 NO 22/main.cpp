#include <iostream>

using namespace std;

int main()
{
    int temperature;

    cout << "Please input the temperature in fahrenheit" << endl;
    cin >> temperature;


    if ( temperature < -173)
    {
        cout << "The Ethyl alcohol will freeze" << endl;
    }else if ( temperature > 172)
    {
        cout << "The Ethyl alcohol will boil" << endl;
    }else
    {
        cout << "" ;
    }

    if ( temperature < -362)
    {
        cout << "The oxygen will freeze" << endl;
    }else if ( temperature > -306)
    {
        cout << "The oxygen will boil" << endl;
    }else
    {
        cout << "" ;
    }

    if ( temperature < -38)
    {
        cout << "The mercury will freeze" << endl;
    }else if ( temperature > 676)
    {
        cout << "The mercury will boil" << endl;
    }else
    {
        cout << "" ;
    }

    if ( temperature < 32)
    {
        cout << "The water will freeze" << endl;
    }else if ( temperature > 212)
    {
        cout << "The water will boil" << endl;
    }else
    {
        cout << "" ;
    }

    return 0;
}
