#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int A = 0;
	unsigned int B = 0;

	while (true)
	{
		cin >> A >> B;
		if (A == 0 && B == 0)
		{
			break;
		}
		cout << A + B << "\n";
	}

	return 0;
}