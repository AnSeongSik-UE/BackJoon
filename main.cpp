#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int N = 0;
	unsigned int M = 0;
	unsigned int Baskets[101] = { 0, };
	unsigned int StartNumber = 0;
	unsigned int EndNumber = 0;
	unsigned int InputNumber = 0;

	std::cin >> N >> M;
	for (int i = 1; i <= M; ++i)
	{
		std::cin >> StartNumber >> EndNumber >> InputNumber;
		for (StartNumber; StartNumber <= EndNumber; ++StartNumber)
		{
			Baskets[StartNumber] = InputNumber;
		}
	}

	for (int i = 1; i <= N; ++i)
	{
		std::cout << Baskets[i] << " ";
	}

	return 0;
}