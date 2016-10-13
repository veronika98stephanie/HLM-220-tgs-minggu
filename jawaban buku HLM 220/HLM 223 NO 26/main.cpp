#include <iostream>

using namespace std;

int main()
{
   char choice;
   int minutes;

   cout << "Please choose the option " << endl;
   cout << "Package A:" << endl;
   cout << "For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute."<< endl;
   cout << "Package B:" << endl;
   cout << "For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute." << endl;
   cout << "Package C:" << endl;
   cout << "For $69.99 per month unlimited minutes provided." << endl;

   cin >> choice;

   switch (choice)
   {
   case 'a':
   case 'A':
    cout << "How long (minutes) ?" << endl;
    cin >> minutes;

    if (minutes <= 450)
    {
        cout << "Total amount $" << 39.99 << endl;
    }else
    {
        cout << "Total amount $" << 39.99 + (minutes-450)*0.45 << endl;
    }
    if (39.99 + (minutes-450)*0.45 > 59.99 + (minutes-900)*0.40)
    {
        cout << "The amount that you could save if you choose B $"
             << 39.99 + (minutes-450)*0.45 -59.99 + (minutes-900)*0.40 << endl;
    }if (39.99 + (minutes-450)*0.45 > 69.99)
    {
        cout << "The amount that you could save if you choose c $"
             << 39.99 + (minutes-450)*0.45 -69.99 << endl;
    }
    break;

    case 'b':
    case 'B':
    cout << "How long (minutes) ?" << endl;
    cin >> minutes;

    if (minutes <= 900)
    {
        cout << "Total amount $" << 59.99 << endl;
    }else
    {
        cout << "Total amount $" << 59.99 + (minutes-900)*0.40 << endl;
    }
    if (59.99 + (minutes-900)*0.40 > 69.99)
    {
        cout << "The amount that you could save if you choose c $"
             << 59.99 + (minutes-900)*0.40 - 69.99 << endl;
    }
    break;

    case 'c':
    case 'C':
        cout << "Total amount $" << 69.99 << endl;
        break;
   }

    return 0;
}


