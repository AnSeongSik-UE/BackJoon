#include <iostream>
//#include <stack>
#include "Stack.h"

int main()
{
	
	//std::stack<int>* a = new std::stack<int>;
	//std::stack<int>* b = new std::stack<int>;
	////int c[10] = { 0, };
	//b->push(7);
	//b->push(8);
	//b->push(9);
	//a->push(1);
	////std::cout << a->top() << "\n";
	//a->push(2);
	////std::cout << a->size() << "\n";
	//a->pop();
	//std::cout << a->size() << "\n";
	//std::cout << a->top() << "\n";

	//a->swap(*b);
	//for (int i = 0; i < a->size(); ++i)
	//{
	//	std::cout << a->top() << "\n";
	//	a->pop();
	//}
	//for (int i = 0; i < b->size(); ++i)
	//{
	//	std::cout << b->top() << "\n";
	//	b->pop();
	//}
	//delete a;
	//delete b;

	FStack<int> a;
	FStack<int> b;
	a.Push(1);
	a.Push(2);
	a.Push(3);
	a.Pop();
	a.Push(100);
	a.Push(200);
	a.Pop();
	//b.Push(9999);
	//a.Swap(&b);
	std::cout << a.Top() << " " << a.Empty() << " " << a.Size() << "\n";
	std::cout << b.Top() << " " << b.Empty() << " " << b.Size() << "\n";
	b = a;
	b.Node->Data = 99;
	std::cout << a.Top() << " " << a.Empty() << " " << a.Size() << "\n";
	std::cout << b.Top() << " " << b.Empty() << " " << b.Size() << "\n";

	return 0;
}