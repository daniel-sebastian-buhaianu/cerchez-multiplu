#include <iostream>

using namespace std;

#define MIN_N 1
#define MAX_N 1000
#define MAX_CIFRE_INT 10

int main()
{
	int n;

	cout << "n = "; cin >> n;

	if (n < MIN_N || n > MAX_N)
	{
		cout << "Eroare valoare n\n";
		return 1;
	}

	int v[] = {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111, 1111111111};

	int m = MAX_CIFRE_INT;

	int i, r[m];

	for (i = 0; i < m; i++)
	{
		r[i] = v[i] % n;

		if (r[i] == 0)
		{
			cout << v[i];
			return 0;
		}
	}

	int j;

	for (i = 0; i < m-1; i++)
	{
		for (j = i+1; j < m; j++)
		{
			if (r[i] == r[j])
			{
				cout << v[j]-v[i];
				return 0;
			}
		}
	}

	cout << "nu am putut gasi solutie\n";

	return 0;
}
