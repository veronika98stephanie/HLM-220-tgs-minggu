#include <iostream>

using namespace std;

int main()
{
    string name1, name2, name3;
    int time1, time2, time3;

    cout<<"please input a name and time"<<endl;

    cin>>name1;
    while (cin >> time1)
    {
        while (time1 < 0)
        {
            cout << "Please enter the right time " << endl;
            cin >> time1;
        }break;
    }

    cout<<"please input the second name and time"<<endl;

    cin>>name2;
    while (cin >> time2)
    {
        while (time2 < 0)
        {
            cout << "Please enter the right time " << endl;
            cin >> time2;
        }break;
    }

    cout<<"please input the third name and time"<<endl;

    cin>>name3;
    while (cin >> time3)
    {
        while (time3 < 0)
        {
            cout << "Please enter the right time " << endl;
            cin >> time3;
        }break;
    }

    if (time1>time2 && time1>time3 && time2>time3){
        cout<<"First :"<<name3<<endl<<"Second :"<<name2<<endl<<"Third :"<<name1;
    }
    else if (time2>time1 && time2>time3 && time1>time3){
        cout<<"First :"<<name3<<endl<<"Second :"<<name1<<endl<<"Third :"<<name2;
    }
    else if (time1>time3 && time1>time2 && time3>time2){
        cout<<"First :"<<name2<<endl<<"Second :"<<name3<<endl<<"Third :"<<name1;
    }
    else if (time2>time3&& time2>time1 && time3>time1){
        cout<<"First :"<<name1<<endl<<"Second :"<<name3<<endl<<"Third :"<<name2;
    }
    else if (time3>time1 && time1>time2 && time3>time2){
        cout<<"First :"<<name2<<endl<<"Second :"<<name1<<endl<<"Third :"<<name3;
    }
    else{
        cout<<"First :"<<name1<<endl<<"Second :"<<name2<<endl<<"Third :"<<name3;
    }
    return 0;
}
