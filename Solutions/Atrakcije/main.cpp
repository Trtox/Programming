#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
/* VERZIJA 2020 ::D
int n,k,ans=0,br=0,i;
  cin>>n>>k;
  int a[n];
  for(i=0;i<n;++i)
    cin>>a[i];

  sort(a,a+n);

  for(i=0;i<n;++i)
  {
     br+=a[i];
     if(br<=k)
        ans++;
     else
        break;
  }

 cout<<ans;
*/
int main()
{
    int n,i,k,a[100],br,b[100],pozicija,p,ostatak;
    br=0;
    pozicija=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[pozicija]=a[i];
            pozicija++;
        }
    }
    sort(b,b+pozicija);
    for(i=0;i<pozicija;i++)
    {
        if(i==0)
        {

        if(b[i]<=k)
        {
            br++;
            ostatak=k-b[i];
        }
        }
        else
        {
            if(b[i]<=k && b[i]!=b[i-1] && b[i]<=ostatak)
            {
                br++;
                ostatak=k-b[i];
                if(ostatak==k || ostatak<b[i+1])
        {
            cout<<br;
            exit(EXIT_SUCCESS);
        }
            }
        }


        if(ostatak==k || ostatak<b[i+1])
        {
            cout<<br;
            exit(EXIT_SUCCESS);
        }


    }
    cout<<br;

    system("pause");
    return 0;
}
