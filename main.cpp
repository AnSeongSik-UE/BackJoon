#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int Count = 0;
	std::string Numbers = "\0";
	unsigned int TotalNumber = 0;

	std::cin >> Count >> Numbers;
	for (int i = 0; i < Count; ++i)
	{
		TotalNumber += atoi(&Numbers.back());
		Numbers.pop_back();
	}

	std::cout << TotalNumber << "\n";

	return 0;
}