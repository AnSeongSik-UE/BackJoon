#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::string Word = "\0";
	
	std::cin >> Word;
	std::cout << (int)Word.front();
	return 0;
}