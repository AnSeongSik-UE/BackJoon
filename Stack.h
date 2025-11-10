#pragma once

template<typename T>
class FStack
{
public:
	FStack()
	{

	}
	virtual ~FStack()
	{

	}

	void Push(T InData)
	{
		Data = InData;
		Index++;
	}

	void Pop()
	{

	}

	void Size()
	{

	}

	void Swap()
	{

	}

	void Top()
	{

	}

protected:
	int Index = 0;
	T Data;
	T* PreStack = nullptr;
};