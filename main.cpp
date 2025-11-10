#include <iostream>
#include <stack>

int main()
{
	
	std::stack<int>* a = new std::stack<int>;
	std::stack<int>* b = new std::stack<int>;
	b->push(7);
	b->push(8);
	b->push(9);
	a->push(1);
	std::cout << a->top() << "\n";
	a->push(2);
	std::cout << a->size() << "\n";
	a->pop();
	std::cout << a->size() << "\n";
	std::cout << a->top() << "\n";

	a->swap(*b);
	for (int i = 0; i < a->size(); ++i)
	{
		std::cout << a->top() << "\n";
		a->pop();
	}
	for (int i = 0; i < b->size(); ++i)
	{
		std::cout << b->top() << "\n";
		b->pop();
	}
	delete a;
	delete b;
	return 0;
}