#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string k, t,novikljuc;
	getline(cin, k);
	getline(cin, t);
	int i;
	int duzinak = k.size();
	int duzinat = t.size();
	int p = duzinat + 1;
	char kljuc[100];
	char tt[100];
	int nizk[100];
	int nizt[100];
	int s[100];
	int cbdjeljenje, om;
	cbdjeljenje = duzinat / duzinak;
	om = duzinat % duzinak;
	if (om == 0)
	{
		for (i = 0; i <= cbdjeljenje; i++)
		{
			novikljuc += k;
		}

	}
	else
	{
		for (i = 0; i <= cbdjeljenje; i++)
		{
			novikljuc += k;
		}
		novikljuc = novikljuc + novikljuc.substr(cbdjeljenje, om);
	}

	kljuc[p] = '\0';
	tt[p] = '\0';
	char finalniniz[100];
	for (i = 0; i < duzinat; i++)
	{
		kljuc[i] = novikljuc[i];
		tt[i] = t[i];
	}

	for (i = 0; i < duzinat; i++)
	{
		if (kljuc[i] == 'A')
		{
			nizk[i] = 0;
		}
		else if (kljuc[i] == 'B')
		{
			nizk[i] = 1;
		}
		else if (kljuc[i] == 'C')
		{
			nizk[i] = 2;
		}
		else if (kljuc[i] == 'D')
		{
			nizk[i] = 3;
		}
		else if (kljuc[i] == 'E')
		{
			nizk[i] = 4;
		}
		else if (kljuc[i] == 'F')
		{
			nizk[i] = 5;
		}
		else if (kljuc[i] == 'G')
		{
			nizk[i] = 6;
		}
		else if (kljuc[i] == 'H')
		{
			nizk[i] = 7;
		}
		else if (kljuc[i] == 'I')
		{
			nizk[i] = 8;
		}
		else if (kljuc[i] == 'J')
		{
			nizk[i] = 9;
		}
		else if (kljuc[i] == 'K')
		{
			nizk[i] = 10;
		}
		else if (kljuc[i] == 'L')
		{
			nizk[i] = 11;
		}
		else if (kljuc[i] == 'M')
		{
			nizk[i] = 12;
		}
		else if (kljuc[i] == 'N')
		{
			nizk[i] = 13;
		}
		else if (kljuc[i] == 'O')
		{
			nizk[i] = 14;
		}
		else if (kljuc[i] == 'P')
		{
			nizk[i] = 15;
		}
		else if (kljuc[i] == 'Q')
		{
			nizk[i] = 16;
		}
		else if (kljuc[i] == 'R')
		{
			nizk[i] = 17;
		}
		else if (kljuc[i] == 'S')
		{
			nizk[i] = 18;
		}
		else if (kljuc[i] == 'T')
		{
			nizk[i] = 19;
		}
		else if (kljuc[i] == 'U')
		{
			nizk[i] = 20;
		}
		else if (kljuc[i] == 'V')
		{
			nizk[i] = 21;
		}
		else if (kljuc[i] == 'W')
		{
			nizk[i] = 22;
		}
		else if (kljuc[i] == 'X')
		{
			nizk[i] = 23;
		}
		else if (kljuc[i] == 'Y')
		{
			nizk[i] = 24;
		}
		else if (kljuc[i] == 'Z')
		{
			nizk[i] = 25;
		}

	}

	for (i = 0; i < duzinat; i++)
	{
		if (tt[i] == 'A')
		{
			nizt[i] = 0;
		}
		else if (tt[i] == 'B')
		{
			nizt[i] = 1;
		}
		else if (tt[i] == 'C')
		{
			nizt[i] = 2;
		}
		else if (tt[i] == 'D')
		{
			nizt[i] = 3;
		}
		else if (tt[i] == 'E')
		{
			nizt[i] = 4;
		}
		else if (tt[i] == 'F')
		{
			nizt[i] = 5;
		}
		else if (tt[i] == 'G')
		{
			nizt[i] = 6;
		}
		else if (tt[i] == 'H')
		{
			nizt[i] = 7;
		}
		else if (tt[i] == 'I')
		{
			nizt[i] = 8;
		}
		else if (tt[i] == 'J')
		{
			nizt[i] = 9;
		}
		else if (tt[i] == 'K')
		{
			nizt[i] = 10;
		}
		else if (tt[i] == 'L')
		{
			nizt[i] = 11;
		}
		else if (tt[i] == 'M')
		{
			nizt[i] = 12;
		}
		else if (tt[i] == 'N')
		{
			nizt[i] = 13;
		}
		else if (tt[i] == 'O')
		{
			nizt[i] = 14;
		}
		else if (tt[i] == 'P')
		{
			nizt[i] = 15;
		}
		else if (tt[i] == 'Q')
		{
			nizt[i] = 16;
		}
		else if (tt[i] == 'R')
		{
			nizt[i] = 17;
		}
		else if (tt[i] == 'S')
		{
			nizt[i] = 18;
		}
		else if (tt[i] == 'T')
		{
			nizt[i] = 19;
		}
		else if (tt[i] == 'U')
		{
			nizt[i] = 20;
		}
		else if (tt[i] == 'V')
		{
			nizt[i] = 21;
		}
		else if (tt[i] == 'W')
		{
			nizt[i] = 22;
		}
		else if (tt[i] == 'X')
		{
			nizt[i] = 23;
		}
		else if (tt[i] == 'Y')
		{
			nizt[i] = 24;
		}
		else if (tt[i] == 'Z')
		{
		nizt[i] = 25;
        }

	}
	for (i = 0; i < duzinat; i++)
	{
		s[i] = (nizk[i] + nizt[i]) % 26;
	}
	for (i = 0; i < duzinat; i++)
	{
		if (s[i] == 0)
		{
			finalniniz[i] = 'A';

		}
		else if (s[i] == 1)
		{
			finalniniz[i] = 'B';
		}
		else if (s[i] == 2)
		{
			finalniniz[i] = 'C';
		}
		else if (s[i] == 3)
		{
			finalniniz[i] = 'D';
		}
		else if (s[i] == 4)
		{
			finalniniz[i] = 'E';
		}
		else if (s[i] == 5)
		{
			finalniniz[i] = 'F';
		}
		else if (s[i] == 6)
		{
			finalniniz[i] = 'G';
		}
		else if (s[i] == 7)
		{
			finalniniz[i] = 'H';
		}
		else if (s[i] == 8)
		{
			finalniniz[i] = 'I';
		}
		else if (s[i] == 9)
		{
			finalniniz[i] = 'J';
		}
		else if (s[i] == 10)
		{
			finalniniz[i] = 'K';
		}
		else if (s[i] == 11)
		{
			finalniniz[i] = 'L';
		}
		else if (s[i] == 12)
		{
			finalniniz[i] = 'M';
		}
		else if (s[i] == 13)
		{
			finalniniz[i] = 'N';
		}
		else if (s[i] == 14)
		{
			finalniniz[i] = 'O';
		}
		else if (s[i] == 15)
		{
			finalniniz[i] = 'P';
		}
		else if (s[i] == 16)
		{
			finalniniz[i] = 'Q';
		}
		else if (s[i] == 17)
		{
			finalniniz[i] = 'R';
		}
		else if (s[i] == 18)
		{
			finalniniz[i] = 'S';
		}
		else if (s[i] == 19)
		{
			finalniniz[i] = 'T';
		}
		else if (s[i] == 20)
		{
			finalniniz[i] = 'U';
		}
		else if (s[i] == 21)
		{
			finalniniz[i] = 'V';
		}
		else if (s[i] == 22)
		{
			finalniniz[i] = 'W';
		}
		else if (s[i] == 23)
		{
			finalniniz[i] = 'X';
		}
		else if (s[i] == 24)
		{
			finalniniz[i] = 'Y';
		}
		else if (s[i] == 25)
		{
		finalniniz[i] = 'Z';
		}

	}
	for (i = 0; i < duzinat; i++)
	{
		cout << finalniniz[i];
	}








	return 0;
}

