#include <iostream>

using namespace std;

int main()
{
    string  col1,
            col2;

    cout << "Please input two primary color (red, blue, or yellow) " << endl;
    cin >> col1 >> col2;

    if (col1 == "red" && col2 == "yellow" || col2 == "red" && col1 == "yellow")
    {
        cout << "Orange" << endl;
    }else if (col1 == "red" && col2 == "blue" || col2 == "red" && col1 == "blue")
    {
        cout << "Purple" << endl;
    }else if (col1 == "yellow" && col2 == "blue" || col2 == "yellow" && col1 == "blue")
    {
        cout << "Green" << endl;
    }

    if (col1 != "red" && col1 != "yellow" && col1 != "blue")
    {
        cout << "Error" << endl;
    }else if (col2 != "red" && col2 != "yellow" && col2 != "blue")
    {
        cout << "Error" << endl;
    }else
    {
        cout << "" << endl;
    }
    return 0;
}
