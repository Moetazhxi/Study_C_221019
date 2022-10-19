#include <iostream>
using namespace std;

int main()
{
	int score[5], n, i, temp;
	for (n = 0; n <= 4; n++)
	{
		cin >> score[n];
	}
	for (n = 0; n <= 3; n++)
	{
		for (i = 0; i <= 4 - n; i++)
		{
			if (score[i] < score[i + 1])
			{
				temp = score[i];
				score[i] = score[i + 1];
				score[i + 1] = temp;
			}
		}
	}
	for (n = 0; n <= 4; n++)
	{
		cout << "第" << " " << n + 1 << " " << "名：";
		cout << score[n] << endl;
	}
	return 0;
}
