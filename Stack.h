#pragma once

template<typename T>
struct FNode
{
	T Data = 0;
	FNode<T>* PreNode = nullptr;
};

template<typename T>
class FStack
{
protected:
	int Index = 0;
	FNode<T>* Node = nullptr;

public:
	FStack()
	{
	}
	virtual ~FStack()
	{
	}

	void Push(int InData)
	{
		FNode<T>* TempNode = Node;
		Node = new FNode<T>;
		Node->Data = InData;
		Node->PreNode = TempNode;
		Index++;
	}

	void Pop()
	{
		if(Node)
		{
			FNode<T>* TempNode = Node;
			Node = Node->PreNode;
			delete TempNode;
			Index--;
		}
	}

	int Size()
	{
		return Index;
	}

	void Swap(FStack* RS)
	{
		FStack* TempStack = this;
		this = RS;
		RS = TempStack;
	}

	int Top()
	{
		return Node->Data;
	}

	bool Empty()
	{
		return Index == 0;
	}

};