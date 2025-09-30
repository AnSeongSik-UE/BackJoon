#include <iostream>

using namespace std;

int main()
{
	int Value = 0;
	cin >> Value;

	for (int i = 0; i < 9; ++i)
	{
		cout << Value << " * " << i + 1 << " = " << (Value * (i + 1)) << endl;
	}
	return 0;
}