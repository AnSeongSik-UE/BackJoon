#pragma once

class FStack
{
protected:
	int Data[100];
	int Index;

public:
	FStack()
	{
		Data[100] = { 0, };
		Index = 0;
	}
	virtual ~FStack()
	{

	}

	void Push(int InData)
	{
		Index++;
		Data[Index] = InData;
	}

	void Pop()
	{
		if(!Empty())
		{
			Data[Index] = 0;
			Index--;
		}
	}

	int Size()
	{
		return Index;
	}

	//void Swap(FStack* RS)
	//{
	//}

	int Top()
	{
		return Data[Index];
	}

	bool Empty()
	{
		return Index == 0;
	}
};