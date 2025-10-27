#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	bool ReceiveReport[30] = { false, };
	unsigned int StudentNumber = 0;
	unsigned int Count = 2;

	for (int i = 1; i <= 28; ++i)
	{
		std::cin >> StudentNumber;
		ReceiveReport[StudentNumber] = true;
	}

	for (int i = 1; i <= 30; ++i)
	{
		if (!ReceiveReport[i])
		{
			std::cout << i << "\n";
			Count--;
		}
		if (Count == 0)
		{
			break;
		}
	}

	return 0;
}