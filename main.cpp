#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int A = 0;
	unsigned int B = 0;

	while (cin >> A >> B)
	{
		cout << A + B << "\n";
		if (cin.eof())
		{
			break;
		}
	}

	return 0;
}