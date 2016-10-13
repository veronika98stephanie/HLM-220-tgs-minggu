#include <iostream>

using namespace std;

int main()
{
    double  length,
            width,
            length1,
            width1,
            area,
            area1;

    cout << "Please input the first rectangle length and width " << endl;
    cin >> length >> width;
    cout << "Please input the second rectangle length and width " << endl;
    cin >> length1 >> width1;

    area = length*width;
    area1 = length1*width1;

    if (area > area1)
    {
        cout << "The first rectangle's area is greater than the second rectangle's area" << endl;
    }else if (area == area1)
    {
        cout << "The first rectangle's area is as same as the second rectangle's area" << endl;
    }else
    {
        cout << "The second rectangle's area is greater than the first rectangle's area" << endl;
    }
    return 0;
}
