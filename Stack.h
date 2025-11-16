#pragma once

#include <iostream>

template<typename T>
struct FNode
{
	T Data;
	FNode<T>* PreNode = nullptr;
};

template<typename T>
class FStack
{
protected:
	int Index = 0;
	//FNode<T>* Node = nullptr;

public:
	FNode<T>* Node = nullptr;

	FStack()
	{
	}
	FStack(const FStack<T>& RS)
	{
		CopyFrom(RS);
	}
	virtual ~FStack()
	{
		Clear();
	}

	FStack<T>& operator=(const FStack<T>& RS)
	{
		if (this != &RS)
		{
			Clear();
			CopyFrom(RS);
		}
		return *this;
	}

	void Push(T InData)
	{
		FNode<T>* TempNode = Node;
		Node = new FNode<T>;
		Node->Data = InData;
		Node->PreNode = TempNode;
		++Index;
	}

	void Pop()
	{
		if(Node)
		{
			FNode<T>* TempNode = Node;
			Node = Node->PreNode;
			delete TempNode;
			--Index;
		}
	}

	int Size()
	{
		return Index;
	}

	void Swap(FStack<T>& RS)
	{
		FNode<T>* TempNode = Node;
		Node = RS.Node;
		RS.Node = TempNode;

		int TempIndex = Index;
		Index = RS.Index;
		RS.Index = TempIndex;
	}

	T Top()
	{
		if(Node)
		{
			return Node->Data;
		}
		return NULL;
	}

	bool Empty()
	{
		return Index == 0;
	}

private:
	void CopyFrom(const FStack<T>& RS)
	{
		FNode<T>* RSReplicant = RS.Node;
		T* RSDatas = new T[RS.Index];

		for (int i = 0; i < RS.Index; ++i)
		{
			RSDatas[i] = RSReplicant->Data;
			if (RSReplicant->PreNode)
			{
				RSReplicant = RSReplicant->PreNode;
			}
		}
		for (int i = 0; i < RS.Index; ++i)
		{
			Push(RSDatas[RS.Index - 1 - i]);
		}

		delete[] RSDatas;
	}
	void Clear()
	{
		while (Node)
		{
			FNode<T>* NextDeleteNode = Node->PreNode;
			delete Node;
			Node = NextDeleteNode;
		}
		Index = 0;
	}
};