#include <iostream>
#include <queue>
#include "Queue.h"

int main()
{
	std::queue<int>* a = new std::queue<int>;
	std::queue<int>* b = new std::queue<int>;

	a->push(4);
	a->push(5);
	std::cout << a->front() << " " << a->back() << " " << a->size() << "\n";
	b->push(100);
	b->push(200);
	std::cout << b->front() << " " << b->back() << " " << b->size() << "\n";
	a->swap(*b);
	b->pop();
	std::cout << a->front() << " " << a->back() << " " << a->size() << "\n";
	std::cout << b->front() << " " << b->back() << " " << b->size() << "\n";

	return 0;
}