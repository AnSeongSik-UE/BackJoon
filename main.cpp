#include <iostream>

using namespace std;

int main()
{
	unsigned int Recipt = 0;
	unsigned int Type = 0;
	unsigned int Price = 0;
	unsigned int Number = 0;
	unsigned int CalcuratedRecipt = 0;

	cin >> Recipt;
	cin >> Type;

	for (int i = 0; i < Type; ++i)
	{
		Price = 0;
		Number = 0;

		cin >> Price >> Number;

		CalcuratedRecipt += (Price * Number);
	}

	if (CalcuratedRecipt == Recipt)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}