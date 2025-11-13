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
	FStack(const FStack& RS)
	{
		Index = RS.Index;
		FNode<T>* RSReplection = RS.Node;
		for (int i = 0; i < Index; ++i)
		{
			FNode<T>* NewNode = new FNode<T>;
			NewNode = RSReplection;
			NewNode->Data = RSReplection->Data;
			NewNode->PreNode = RSReplection->PreNode;
			if (i == 0)
			{
				Node = NewNode;
			}
			RSReplection = NewNode->PreNode;
		}
	}
	virtual ~FStack()
	{
		//if (Node)
		//{
		//	delete Node;
		//}
	}

	//void operator=(const FStack& RS)
	//{
	//	this->Index = RS.Index;
	//	this->Node = RS.Node;
	//}

	void Push(T InData)
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

	//void Swap(FStack* RS)
	//{
	//	FStack* TempStack = this;
	//	this = RS;
	//	RS = TempStack;
	//}

	int Top()
	{
		if(Node)
		{
			return Node->Data;
		}
		return 0;
	}

	bool Empty()
	{
		return Index == 0;
	}
};