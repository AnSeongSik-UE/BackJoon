#include<iostream>

using namespace std;

int main()
{
    int Hour = 0;
    int Minute = 0;
    int CookTime = 0;

    cin >> Hour >> Minute >> CookTime;

    Minute += CookTime;

    if (Minute >= 60 )
    {
        Hour += Minute / 60;
        Minute %= 60;
        if (Hour >= 24)
        {
            Hour %= 24;
        }
    }

    cout << Hour << " " << Minute << endl;

    return 0;
}