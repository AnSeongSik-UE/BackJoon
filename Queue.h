#pragma once

template<typename T>
struct Node
{
	T Data;
	Node* PreNode;
	Node* NextNode;
};

template<typename T>
class Queue
{
protected:
	T Index;
	Node<T>* MyNode;
public:
	Queue()
	{

	}
	virtual ~Queue()
	{

	}

	inline void Push()
	{

	}
	inline void Pop()
	{

	}
	inline void Size()
	{

	}
	inline void Swap()
	{

	}
	inline void Front()
	{

	}
	inline void Back()
	{

	}
};