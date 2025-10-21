#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int Count = 0;

	cin >> Count;

	for (int j = 0; j < Count; ++j)
	{
		for (int i = 0; i < Count; ++i)
		{
			if ((i + j) < (Count - 1))
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}

	return 0;
}