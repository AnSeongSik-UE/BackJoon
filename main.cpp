#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int N = 0;
	unsigned int M = 0;
	unsigned int Baskets[101] = { 0, };
	unsigned int TargetNumber = 0;
	unsigned int ChangeNumber = 0;
	unsigned int Temp = 0;

	std::cin >> N >> M;
	for (int i = 1; i <= N; ++i)
	{
		Baskets[i] = i;
	}

	for (int i = 1; i <= M; ++i)
	{
		std::cin >> TargetNumber >> ChangeNumber;
		Temp = Baskets[TargetNumber];
		Baskets[TargetNumber] = Baskets[ChangeNumber];
		Baskets[ChangeNumber] = Temp;
	}

	for (int i = 1; i <= N; ++i)
	{
		std::cout << Baskets[i] << " ";
	}

	return 0;
}