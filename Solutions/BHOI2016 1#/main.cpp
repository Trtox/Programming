#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define i64 long long
#define elif else if

using namespace std;

void PremjestiPijuna(int n, int x, int y , int p, char potezi[])
{
    rep(0,p)
    {
        switch(potezi[i])
        {

        case 'u' :
            y++;
        if(y > n)
            y = 1;
        break;

        case 'd' :
            y--;
        if(y < 1)
            y = n;
        break;

        case 'r' :
            x++;
        if(x > n)
            x = 1;
        break;

        case 'l' :
            x--;
        if(x < 1)
            x = n;
        break;


        }

    }

    cout<< x <<" "<< y;
    return;

}


int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  char potezi[] = {'d','r','d','r','d','r','d','r','u','l'};
 PremjestiPijuna(3,1,1,10,potezi);


 return 0;
}
