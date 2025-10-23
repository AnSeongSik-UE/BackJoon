#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int N = 0;
	unsigned int BiggestNumber = 0;
	unsigned int BiggestNumbersLocation = 0;

	for (int i = 0; i < 9; ++i)
	{
		std::cin >> N;
		if (BiggestNumber < N)
		{
			BiggestNumber = N;
			BiggestNumbersLocation = i + 1;
		}
	}
	std::cout << BiggestNumber << "\n" << BiggestNumbersLocation << "\n";

	return 0;
}