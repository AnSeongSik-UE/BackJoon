#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int Index = 0;
	std::string Word = "\0";
	
	std::cin >> Word >> Index;
	std::cout << Word[Index - 1] << "\n";

	return 0;
}