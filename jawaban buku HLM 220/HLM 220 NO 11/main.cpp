#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);

    int num1,
        num2,
        total,
        minNumb = 100,
        maxNumb = 999;

    num1 = (rand() % (maxNumb - minNumb + 1)) + minNumb;
    num2 = (rand() % (maxNumb - minNumb + 1)) + minNumb;

    cout << setw(5) << right << num1 << endl;
    cout << setw(5) << right << num2 << endl;
    cout << "+______" << endl;
    cin >> total;

    if (total == num1 + num2)
    {
        cout << "Congrats";
    }else
    {
        cout << "The total is incorrect, the correct answer is " << total << endl;
    }

    return 0;
}
