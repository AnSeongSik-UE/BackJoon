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
	//FNode<T>* Node = nullptr;

public:
	FNode<T>* Node = nullptr;
	FStack()
	{
	}
	FStack(const FStack& RS)
	{
		Index = RS.Index;
		FNode<T>* NewNode = new FNode<T>;
		FNode<T>* RSReplection = RS.Node;
		for (int i = 0; i < Index; ++i)
		{
			if(i != 0)
			{
				NewNode = NewNode->PreNode;
			}
			//NewNode = RSReplection;
			NewNode->Data = RSReplection->Data;
			//NewNode->PreNode = RSReplection->PreNode;
			NewNode->PreNode = new FNode<T>;
			if (i == 0)
			{
				Node = NewNode;
			}
			else if (i + 1 == Index)
			{
				NewNode->PreNode = nullptr;
			}
			RSReplection = RSReplection->PreNode;
		}
	}
	virtual ~FStack()
	{
		//if (Node)
		//{
		//	delete Node;
		//}
	}

	void operator=(const FStack& RS)
	{
		new FStack(RS);
	}

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