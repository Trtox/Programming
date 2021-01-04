#include <bits/stdc++.h>
#define ll long long
#define elif else if

using namespace std;

const int mod = 1e9+7;

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

   ll n,q,i,j;
   cin>>n>>q;
   ll a[n+1];
   ll lb[q],rb[q],br=1;
   ll ans[q];
   for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

  for(i=0;i<q;i++)
  {
      ans[i]=0;
      cin>>lb[i];
      cin>>rb[i];
  }

  for(i=0;i<q;i++)
  {
      for(j=lb[i]-1;j<rb[i];j++)
      {
          ans[i]+=br*a[j]%mod;
          ans[i]%=mod;
          br*=2;

      }
      cout<<ans[i]<<endl;
      br=1;
  }

 return 0;
}
