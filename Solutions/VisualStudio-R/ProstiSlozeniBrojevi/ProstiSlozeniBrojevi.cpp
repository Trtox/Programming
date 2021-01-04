#include <iostream>

using namespace std;

int main()
{
	int a[100], b[100], n, i, brojac, j,poz;
	for (i = 0; i < 100; i++)
		b[i] = 0;
	poz = 0;
	brojac = 0;
	cout << "N=";
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> a[i];

	for (i = 0; i < n; i++)
{
	if (a[i] == 2 || a[i] == 3)
	{
		b[poz] = a[i];
		poz++;
		
	}
	else
	{
		for (j = 2; j < 2*n; j++)
		{

			if (a[i] % j == 0 && j!=a[i])
			{
				brojac++;
				
			}

		}
		if (brojac == 0 && a[i]!=1)
		{
			b[poz] = a[i];
			poz++;
		}
	}
	brojac = 0;
}

	for (i = 0; i < poz; i++)
	{
		if (b[i] == 0)
		{
			cout << "Ne postoje prosti brojevi!";
			exit(EXIT_SUCCESS);
		}
		else
		cout << b[i] << " ";
	}







	return 0;
}
