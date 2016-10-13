#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int choice;

    double  pi = 3.14159,
            radius,
            length,
            width,
            base,
            height;

    cout << "Please enter the choice " << endl;
    cout << "1. circle" << endl << "2. rectangle"
         << endl << "3. triangle" << endl << "4. quit" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Please enter the radius" << endl;
        cin >> radius;
        cout << "The area is " << pi*radius*radius;
        break;
    case 2:
        cout << "Please enter the length and width" << endl;
        cin >> length >> width;
        cout << "The area is " << length*width;
        break;
    case 3:
        cout << "Please enter the base and height" << endl;
        cin >> base >> height;
        cout << "The area is " << base*height*0.5;
        break;
    case 4:
        exit(0);
    }
    return 0;
}
