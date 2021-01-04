#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int n, i, j, a[100], priv,poz;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (i = 0; i < n; i++)
		if (a[i] == 0)
			poz = i;
		for (j = 0; j < n - i; j++)
		{
			if (a[j]!=0)
				if (a[j] > a[j + 1])
				{
					priv = a[j];
					a[j] = a[j + 1]; 
					a[j + 1] = priv;
				}
			cout << a[j]<<" ";
		}
		if (a[poz] != 0)
		{
			

		}
	//for (i = 0; i < n; i++)
	//	cout << a[i] << " ";






	system("pause");
	return 0;
}