#include <iostream>

using namespace std;

int main()
{
    long double wavelength;

    cout << "Please input the wavelength" << endl;
    cin >> wavelength;

    if (wavelength > 1E-2)
    {
        cout << "Radio wave" << endl;
    }else if(wavelength <= 1E-2 && wavelength > 1E-3)
    {
        cout << "Micro wave" << endl;
    }else if(wavelength <= 1E-3 && wavelength > 7E-7)
    {
        cout << "infrared" << endl;
    }else if(wavelength <= 7E-7 && wavelength > 4E-7)
    {
        cout << "visible light" << endl;
    }else if(wavelength <= 4E-7 && wavelength > 1E-8)
    {
        cout << "ultraviolet" << endl;
    }else if(wavelength <= 1E-8 && wavelength > 1E-11)
    {
        cout << "x ray" << endl;
    }else
    {
        cout << "Gamma" << endl;
    }

    return 0;
}
