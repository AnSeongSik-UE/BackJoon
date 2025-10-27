#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int Baskets[101] = { 0, };

	unsigned int BasketNumber = 0;
	unsigned int M = 0;
	unsigned int FirstBasket = 0;
	unsigned int EndBasket = 0;
	unsigned int Sub = 0;
	unsigned int Temp = 0;

	std::cin >> BasketNumber >> M;

	for (int i = 1; i <= BasketNumber; i++)
	{
		Baskets[i] = i;
	}

	for (int i = 1; i <= M; i++)
	{
		std::cin >> FirstBasket >> EndBasket;
		Sub = EndBasket - FirstBasket;
		for (int j = 0; j < (Sub / 2) + (Sub % 2); ++j)
		{
			Temp = Baskets[FirstBasket + j];
			Baskets[FirstBasket + j] = Baskets[EndBasket - j];
			Baskets[EndBasket - j] = Temp;
		}
	}

	for (int i = 1; i <= BasketNumber; i++)
	{
		std::cout << Baskets[i] << " ";
	}

	return 0;
}