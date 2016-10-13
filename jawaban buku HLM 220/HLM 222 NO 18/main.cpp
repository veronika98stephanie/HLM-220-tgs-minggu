#include <iostream>

using namespace std;

int main()
{
    double  calories,
            fat,
            //1 fat = 9 calories;
            caloriesFromFat,
            percentage;

    cout << "Please input the calories " << endl;
    while (cin >> calories)
    {
        while (calories < 0)
        {
            cout << "Please input the right calories" << endl;
            cin >> calories;
        }break;
    }

    cout << "Please input the fat " << endl;
    while (cin >> fat)
    {
        while (fat < 0 || fat > calories)
        {
            cout << "Please input the right fats" << endl;
            cin >> fat;
        }break;
    }

    caloriesFromFat = fat * 9;
    percentage = caloriesFromFat/calories;

    cout << "The percentage is " << percentage << "%" << endl;

    return 0;
}
