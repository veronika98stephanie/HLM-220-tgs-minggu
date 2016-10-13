#include <iostream>

using namespace std;

int main()
{
    int second;

    cout<< "please input a number of seconds";
    cin>>second;
    if (second>=60 & second<3600)
    {cout<< second/60<<" minutes";}
    else if (second>=3600& second<86400)
    {cout<< second/3600<<" hours";}
    else if (second>=86400)
    {cout<< second/86400<<" days";}
    else {cout<<second<<" seconds";}

    return 0;
}
