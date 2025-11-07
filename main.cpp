#include <iostream>
#include <stack>

int main()
{
	
	std::stack<int>* a = new std::stack<int>;
	a->push(1);
	std::cout << a->top() << "\n";
	a->push(2);
	std::cout << a->top() << "\n";
	a->pop();
	std::cout << a->top() << "\n";
	a->pop();
	std::cout << a->top() << "\n";

	delete a;
	return 0;
}