#include<iostream>

using namespace std;

int main()
{
    int H = 0;
    int M = 0;

    cin >> H >> M;

    M += 15;

    if (M >= 60 )
    {
        M -= 60;
    }
    else
    {
        H -= 1;
        if (H == -1)
        {
            H = 23;
        }
    }

    cout << H << " " << M << endl;

    return 0;
}