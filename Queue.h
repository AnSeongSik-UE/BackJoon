#pragma once

template<typename T>
class Queue
{
protected:
	int LastIndex = -1;
	size_t SizeOfQ = 0;
	size_t Capacity = 0;
	T* Datas = nullptr;
public:
	Queue()
	{
	}
	Queue(const Queue<T>& RHS)
	{
		SizeOfQ = RHS.SizeOfQ;
		Capacity = RHS.Capacity;
		LastIndex = (int)RHS.SizeOfQ - 1;
		if(Capacity>0)
		{
			Datas = new T[Capacity];
			for (int i = 0; i < RHS.SizeOfQ; ++i)
			{
				Datas[i] = RHS.Datas[i];
			}
		}
	}
	virtual ~Queue()
	{
		if (Datas)
		{
			delete[] Datas;
			Datas = nullptr;
		}
	}

	inline void Push(T Value)
	{
		if (SizeOfQ >= Capacity)
		{
			Capacity = (Capacity == 0) ? 1 : Capacity * 2;
			T* NewDatas = new T[Capacity];
			if(Datas)
			{
				for (size_t i = 0; i < SizeOfQ; ++i)
				{
					NewDatas[i] = Datas[i];
				}
				delete[] Datas;
			}
			Datas = NewDatas;
		}

		++LastIndex;
		Datas[LastIndex] = Value;
		++SizeOfQ;
	}
	inline T Pop()
	{
		if(SizeOfQ>0)
		{
			T OutData = Datas[0];

			for (size_t i = 0; i < SizeOfQ - 1; ++i)
			{
				Datas[i] = Datas[i + 1];
			}

			--SizeOfQ;
			--LastIndex;
			return OutData;
		}
		return T();
	}
	inline size_t Size()
	{
		return SizeOfQ;
	}
	inline void Swap(Queue<T> &RHS)
	{
        T* tempDatas = this->Datas;
        int tempLast = this->LastIndex;
        size_t tempSize = this->SizeOfQ;
        size_t tempCap = this->Capacity;

        this->Datas = RHS.Datas;
        this->LastIndex = RHS.LastIndex;
        this->SizeOfQ = RHS.SizeOfQ;
        this->Capacity = RHS.Capacity;

        RHS.Datas = tempDatas;
        RHS.LastIndex = tempLast;
        RHS.SizeOfQ = tempSize;
        RHS.Capacity = tempCap;
	}
	inline T& Front()
	{
		return Datas[0];
	}
	inline T& Back()
	{
		return Datas[LastIndex];
	}

	inline T* begin()
	{
		return Datas; // 첫 번째 원소의 주소
	}

	inline T* end()
	{
		return Datas + SizeOfQ; // 마지막 원소 다음의 주소 (Standard)
	}

	//inline T* begin()
	//{
	//	T* ReturnValue = nullptr;
	//	if (Datas)
	//	{
	//		CurrentIndex = 0;
	//		ReturnValue = Datas + (sizeof(T) * CurrentIndex);
	//	}
	//	return ReturnValue;
	//}

	//inline T* end()
	//{
	//	T* ReturnValue = nullptr;
	//	if (Datas)
	//	{
	//		CurrentIndex = LastIndex;
	//		ReturnValue = Datas + (sizeof(T) * CurrentIndex);
	//	}
	//	return ReturnValue;
	//}

	//inline T* operator++()
	//{
	//	T* ReturnValue = nullptr;

	//	if (Datas + (sizeof(T) * CurrentIndex + 1) != nullptr)
	//	{
	//		ReturnValue = Datas + (sizeof(T) * CurrentIndex + 1);
	//		CurrentIndex++;
	//	}
	//	return ReturnValue;
	//}

	//inline T& operator*()
	//{
	//	return Datas[CurrentIndex];
	//}

	//inline bool operator==(T* RHS)
	//{
	//	return (Datas + (sizeof(T) * CurrentIndex)) == RHS ? true : false;
	//}
	//inline bool operator!=(T* RHS)
	//{
	//	return (Datas + (sizeof(T) * CurrentIndex)) != RHS ? true : false;
	//}
};