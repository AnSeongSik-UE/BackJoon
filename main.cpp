#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int Number = 0;
	unsigned int RemainderCount[42] = { 0, };
	unsigned int Count = 0;

	for (int i = 0; i < 10; ++i)
	{
		std::cin >> Number;
		RemainderCount[Number % 42]++;
	}

	for (int i = 0; i < 42; ++i)
	{
		if (RemainderCount[i] > 0)
		{
			Count++;
		}
	}
	std::cout << Count << "\n";

	return 0;
}