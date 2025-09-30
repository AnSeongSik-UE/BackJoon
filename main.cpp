#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int TestCase = 0;
    double X[2] = { 0, };
    double Y[2] = { 0, };
    double R[2] = { 0, };
    double DistanceOfTwo = 0;

    cin >> TestCase;
    for (int i = 0; i < TestCase; ++i)
    {
        cin >> X[0] >> Y[0] >> R[0] >> X[1] >> Y[1] >> R[1];

        DistanceOfTwo = sqrt(((X[0] - X[1]) * (X[0] - X[1])) + ((Y[0] - Y[1]) * (Y[0] - Y[1])));

        if (
            X[0] == X[1] &&
            Y[0] == Y[1] &&
            R[0] == R[1]
            )
        {
            cout << -1 << endl;
        }
        else if (
            DistanceOfTwo < (R[0] + R[1]) &&
            DistanceOfTwo > fabs((R[0] - R[1]))
            )
        {
            cout << 2 << endl;
        }
        else if
            (
                DistanceOfTwo == (R[0] + R[1]) ||
                DistanceOfTwo == fabs((R[0] - R[1]))
                )
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}