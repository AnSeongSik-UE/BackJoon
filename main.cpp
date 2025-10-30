#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	std::string Word = "\0";
	
	std::cin >> Word;
	std::cout << Word.length() << "\n";

	return 0;
}