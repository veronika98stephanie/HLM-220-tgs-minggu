#include <iostream>

using namespace std;

int main()
{
    double  penny = 0.01,
            nickle = 0.05,
            dime = 0.1,
            quarter =0.25,
            total,
            dollar = 1,
            pennyCent,
            nickleCent,
            dimeCent,
            quarterCent;

    cout << "Please enter the number of penny. " << endl;
    cin >> penny;
    cout << "Please enter the number of nickles. " << endl;
    cin >> nickle;
    cout << "Please enter the number of dime. " << endl;
    cin >> dime;
    cout << "Please enter the number of quarter. " << endl;
    cin >> quarter;

            pennyCent = penny/100;
            nickleCent = nickle/20;
            dimeCent = dime/10;
            quarterCent = quarter/4;

    total = pennyCent + nickleCent + dimeCent + quarterCent;

    if (total < dollar)
    {
        cout << "It is less than one dollar" << endl;
    }else if (total > dollar)
    {
        cout << "It is more then one dollar" << endl;
    }else
    {
        cout << "Congratulation!" << endl;
    }

    return 0;
}
