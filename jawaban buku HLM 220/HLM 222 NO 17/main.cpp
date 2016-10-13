#include <iostream>

using namespace std;

int main()
{
    string name;
    int date1,
        date2,
        date3,
        vault1,
        vault2,
        vault3,
        temporary;


    cout << "Please input the vaulter name " << endl;
    cin >> name;
    cout << "Please input the date of three vaults were made " << endl;
    cin >> date1 >> date2 >> date3;
    cout << "Please input the vault height between 2 and 5 " << endl;
    while (cin >> vault1 >> vault2 >> vault3 )
    {
        while (vault1 < 2 || vault1 > 5 || vault2 < 2 || vault2 > 5 || vault3 < 2 || vault3 > 5 )
        {
            cout << "Please enter the right number " << endl;
            cin >> vault1 >> vault2 >> vault3 ;
        }break;
    }

    if (vault1 < vault2 && vault1 < vault3 && vault2 < vault3){
        cout << vault3 << " m " << date3 << endl << vault2 << " m " << date2 << endl << vault1 << " m " << date1;
    }
    else if (vault2 < vault1 && vault2 < vault3 && vault1 < vault3){
        cout << vault3 << " m " << date3 << endl << vault1 << " m " << date1 << endl << vault2 << " m " << date2;
    }
    else if (vault1 < vault3 && vault1 < vault2 && vault3 < vault2){
        cout << vault2 << " m " << date2 << endl << vault3 << " m " << date3 << endl << vault1 << " m " << date1;
    }
    else if (vault2 < vault3 && vault2 < vault1 && vault3 < vault1){
        cout << vault1 << " m " << date1 << endl << vault3 << " m " << date3 << endl << vault2 << " m " << date2;
    }
    else if (vault3 < vault1 && vault1 < vault2 && vault3 < vault2){
        cout << vault2 << " m " << date2 << endl << vault1 << " m " << date1 << endl << vault3 << " m " << date3;
    }
    else{
        cout << vault1 << " m " << date1 << endl << vault2 << " m " << date2 << endl << vault3 << " m " << date3;
    }

    return 0;
}
