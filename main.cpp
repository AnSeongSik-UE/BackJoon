#include <iostream>

using namespace std;

int main()
{
	int T = 0;
	int A = 0;
	int B = 0;
	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> A >> B;
		cout << A + B << endl;
	}
	return 0;
}