#include <iostream>
using namespace std;

int main()
{
	int i, n = 0, a[100];
	for (i = 100; i <= 200; i++)
	{
		if (i % 2 == 0)
		{
			a[n] = i;
			if (a[n] % 10 == 0)
			{
				cout << endl;
			}
			cout << a[n] << " ";
		}
	}
	return 0;
}
