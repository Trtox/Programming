#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	int n,i,j;
	float postotak =0.17 ;
	float a[100], b[100],temp;
	for (i = 0; i < 100; i++)
		b[i] = 0;
	cin >> n;
	string proizvod[50];
	string temp1;
	for (i = 0; i < n; i++)
	{
		cin >> proizvod[i] >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		b[i] = a[i] + (a[i] * postotak);
		
	}
	
	 for (i = 0; i < n; i++)
		for(j=i+1; j<n; j++)
	{
			if (b[i] < b[j])
			{
				temp=b[i];
				b[i] = b[j];
				b[j] = temp;
				temp1=proizvod[i];
				proizvod[i] = proizvod[j];
				proizvod[j] = temp1;
			}
	}
	for (i = 0; i < n; i++)
	{
		cout << proizvod[i] << " " <<fixed<<setprecision(2)<< b[i] << endl;
	}
	





	return 0;
}

