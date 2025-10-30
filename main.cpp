#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int TestCase = 0;
	std::string Word = "\0";
	
	std::cin >> TestCase;
	for (int i = 0; i < TestCase; i++)
	{
		std::cin >> Word;
		std::cout << Word.front() << Word.back() << "\n";
	}
	return 0;
}