#include<iostream>

using namespace std;

int main()
{
    int Score = 0;

    cin >> Score;

    if (Score <= 59)
    {
        cout << "F" << endl;
    }
    else if (Score <= 69)
    {
        cout << "D" << endl;
    }
    else if (Score <= 79)
    {
        cout << "C" << endl;
    }
    else if (Score <= 89)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "A" << endl;
    }

    return 0;
}