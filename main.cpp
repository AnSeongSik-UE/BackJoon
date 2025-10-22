#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int N = 0;
	unsigned int Numbers[100] = { 0, };
	unsigned int V = 0;
	unsigned int Count = 0;

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> Numbers[i];
	}

	cin >> V;

	for (int i = 0; i < N; ++i)
	{
		if (Numbers[i] == V)
		{
			Count++;
		}
	}

	cout << Count << "\n";

	return 0;
}