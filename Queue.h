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
		Capacity = RHS.Capacity;
		Datas = new T[Capacity];
		for (int i = 0; i < RHS.SizeOfQ; ++i)
		{
			Datas[i] = RHS.Datas[i];
			++LastIndex;
			++SizeOfQ;
		}
	}
	virtual ~Queue()
	{
		if (Datas)
		{
			delete[] Datas;
		}
	}

	inline void Push(T Value)
	{
		if (SizeOfQ >= Capacity)
		{
			if (Capacity == 0)
			{
				Capacity = 1;
			}
			Capacity *= 2;
			T* NewDatas = new T[Capacity];
			memmove(NewDatas, Datas, SizeOfQ * sizeof(T));
			if (Datas)
			{
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
		if(Datas)
		{
			T OutData = Datas[0];
			--LastIndex;
			--SizeOfQ;
			if (SizeOfQ > 0)
			{
				for (int i = 0; i < SizeOfQ; ++i)
				{
					Datas[i] = Datas[i + 1];
				}
				Datas[SizeOfQ] = NULL;
			}
			else
			{
				delete[] Datas;
			}
			return OutData;
		}
		return 0;
	}
	inline size_t Size()
	{
		return SizeOfQ;
	}
	inline void Swap(Queue<T> &RHS)
	{
		Queue<T>* Temp = new Queue<T>;
		Temp->Datas = this->Datas;
		Temp->LastIndex = this->LastIndex;
		Temp->Capacity = this->Capacity;
		Temp->SizeOfQ = this->SizeOfQ;

		this->Datas = RHS.Datas;
		this->LastIndex = RHS.LastIndex;
		this->Capacity = RHS.Capacity;
		this->SizeOfQ = RHS.SizeOfQ;

		RHS.Datas = Temp->Datas;
		RHS.LastIndex = Temp->LastIndex;
		RHS.Capacity = Temp->Capacity;
		RHS.SizeOfQ = Temp->SizeOfQ;
	}
	inline T Front()
	{
		return Datas ? Datas[0] : NULL;
	}
	inline T Back()
	{
		return Datas ? Datas[LastIndex] : NULL;
	}
};