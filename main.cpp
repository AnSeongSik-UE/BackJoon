#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int N = 0;
	long InputNumber = 0;
	long BiggerNumber = 0;
	long LessNumber = 0;

	std::cin >> N;

	std::cin >> InputNumber;

	BiggerNumber = InputNumber;
	LessNumber = InputNumber;
	if (N != 1)
	{
		for (int i = 1; i < N; ++i)
		{
			std::cin >> InputNumber;
			if (LessNumber > InputNumber)
			{
				LessNumber = InputNumber;
			}
			else if (BiggerNumber < InputNumber)
			{
				BiggerNumber = InputNumber;
			}
		}
	}
	std::cout << LessNumber << " " << BiggerNumber << "\n";

	return 0;
}