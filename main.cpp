#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	int Result = 0;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		Result += i;
	}
	cout << Result << endl;

	return 0;
}