#include <iostream>

using namespace std;

int main()
{
    int book;

    cout << "Please enter the number of books " << endl;
    cin >> book;

    switch (book)
    {
    case 0:
        cout << "Earns 0 points" << endl;
        break;
    case 1:
        cout << "Earns 5 points" << endl;
        break;
    case 2:
        cout << "Earns 15 points" << endl;
        break;
    case 3:
        cout << "Earns 30 points" << endl;
        break;
    }

    if (book >= 4 )
    {
        cout << "Earns 60 points" << endl;

    }

    return 0;
}
