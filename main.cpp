#include<iostream>

using namespace std;

int main()
{
    int Dices[3] = {0,};
    int n = 3 - 1;
    int Double = 0;
    int Triple = 0;
    int Temp = 0;

    cin >> Dices[0] >> Dices[1] >> Dices[2];
    while(n > 0)
    {
        // 오름차순 정렬
        for (int i = 0; i < n; ++i)
        {
            if (Dices[i] > Dices[i + 1])
            {
                Temp = Dices[i];
                Dices[i] = Dices[i + 1];
                Dices[i + 1] = Temp;
            }
        }
        --n;
    }

    // 중복 체크
    for (int i = 0; i < 2; ++i)
    {
        if (Dices[i] == Dices[i + 1])
        {
            if (Double == 0)
            {
                Double = Dices[i];
            }
            else if (Triple == 0)
            {
                Triple = Dices[i];
            }
        }
    }

    if (Triple != 0)
    {
        cout << 10000 + (Triple * 1000) << endl;
    }
    else if (Double != 0)
    {
        cout << 1000 + (Double * 100) << endl;
    }
    else
    {
        cout << Dices[2] * 100 << endl;
    }

    return 0;
}