#include <iostream>

using namespace std;

int main()
{
	std::cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int N = 0;
	unsigned int X = 0;
	unsigned int A = 0;
	unsigned int Count = 0;

	std::cin >> N >> X;

	for (int i = 0; i < N; ++i)
	{
		std::cin >> A;
		if (A < X)
		{
			cout << A << " ";
		}
	}
	cout << "\n";

	return 0;
}