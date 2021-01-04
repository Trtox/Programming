#include <bits/stdc++.h>
#define ll long long
#define elif else if

const long long mod = 1e9+7;

using namespace std;

ll izlaz(ll br)
{
  cout<<br;
  return 0;

}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  ll n,m,i,p=0;
  vector<string> a,b;
  string unos;
  cin>>n;
  ll ans[n]={0};
  for(i=0;i<n;i++)
  {
     cin>>unos;
     a.push_back(unos);
  }
  cin>>m;
  for(i=0;i<m;i++)
  {
      cin>>unos;
      b.push_back(unos);
  }

  for(string x : a)
  {
      ans[p]+=count(b.begin(),b.end(),x);
      p++;
  }
  for(ll x : ans)
    cout<<x<<" ";


 return 0;
}
