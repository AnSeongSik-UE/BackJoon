#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.sync_with_stdio(false);
	unsigned int Count = 0;
	unsigned int A = 0;
	unsigned int B = 0;

	cin >> Count;

	for (int i = 0; i < Count; ++i)
	{
		cin >> A >> B;
		cout << "Case #" << i + 1 << ": " << A + B << "\n";
	}

	return 0;
}