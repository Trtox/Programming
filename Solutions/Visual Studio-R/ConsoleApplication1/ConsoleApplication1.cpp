#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int i, j, temp, niz[100];
	for (i = 0; i < 5; i++)
	{
		cin >> niz[i];
	}
	 
	for(i=0;i<4;i++)
		for (j = i + 1; j < 5; j++)
		{
			if (niz[i] < niz[j])
			{
				temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	for (i = 0; i < 5; i++)
	{
		cout << niz[i];
	}





	system("pause");
	return 0;
}