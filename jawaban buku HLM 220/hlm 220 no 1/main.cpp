#include <iostream>

using namespace std;

int main()
{
    int num1,
        num2;

    cout << "Please input two numbers" << endl;
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << num1 << " is bigger than " << num2 << endl;
    }else
    {
        cout << num2 << " is bigger than " << num1 << endl;
    }
    return 0;
}
