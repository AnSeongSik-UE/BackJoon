#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::cout.sync_with_stdio(false);
	unsigned int N = 0;
	double Subjects[1000] = { 0, };
	double  HighScore = 0;
	double TotalScore = 0;
	
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		std::cin >> Subjects[i];
		if (Subjects[i] > HighScore)
		{
			HighScore = Subjects[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		TotalScore += ((Subjects[i] / HighScore) * 100);
	}

	std::cout << TotalScore/N << "\n";

	return 0;
}