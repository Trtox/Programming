#include <bits/stdc++.h>
#define ll long long
#define elif else if
#define endl "\n"
#define eb(x) emplace_back(x)

using namespace std;

const int mod = 1e9+7;
const int inf = numeric_limits<int>::max();
int izlaz(int br)
{
  cout<<br;
  return 0;

}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int n,i,j;
  unordered_set<int> sett;
  cin>>n;
  vector<int> a(n+1),ans(n+1,0);
  for(i=1;i<=n;++i)
    {
        cin>>a[i];
        sett.insert(a[i]);
    }
  if(sett.size()==1)
  {
    for(i=n;i>=1;--i)
        cout<<i<<" ";
    return 0;
  }
  sett.clear();
  for(i=0;i<n;++i)
  {
      for(j=i+1;j<=n;++j)
      {
          sett.insert(a[j]);
          ans[j-i]+=sett.size();
      }
      sett.clear();
  }
  for(i=1;i<ans.size();++i)
    cout<<ans[i]<<" ";



 return 0;
}
