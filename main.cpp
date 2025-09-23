#include<iostream>

using namespace std;

int main()
{
    int FirstLine = 0;
    int SecondLine = 0;

    cin >> FirstLine >> SecondLine;
    cout << FirstLine * (SecondLine % 10) << endl;
    cout << FirstLine * ((SecondLine % 100) / 10) << endl;
    cout << FirstLine * (SecondLine / 100) << endl;
    cout << FirstLine * SecondLine << endl;

    return 0;
}