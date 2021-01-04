#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	long long n, i, j, k;
	vector<long long> p;
	vector<long long> t(10000, 0);
	vector<long long> dt(10000, 0);
	long long broj;
	long long poz = 0;
	long long  br1 = 0;
	long long br2 = 0;
	cin >> n;

	for (i = 0; i < n; i++)
	{
		cin >> broj;
		p.push_back(broj);
	}

	for (j = 0; j < 100000; j++)
	{

		for (i = 0; i < n; i++)
		{


			br2 = p[i];
			
			dt.push_back(br2);
			cout << dt[i];

			if (i == n)
			{
				i = 0;
			}

			br1++;
			if (br1 == 100000)

				break;
		}
	}
		/*  for(k=1;k<t.size();i++)
		  {
			  broj=t[i-1]+dt[i];
			  cout << dt[i];
			  t.push_back(broj);
			  

		  }
	  
	}
	/*
	for (i = 0; i < t.size(); i++)
		for (j = 1; j < t.size(); j++)
		{
			if (t[i] == t[j])
				cout << " T = " << t[i];
		}

		*/









	return 0;
}
