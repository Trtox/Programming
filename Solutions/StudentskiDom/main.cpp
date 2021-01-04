#include <bits/stdc++.h>
#include <stdio.h>
#define ll long long
#define elif else if
#define endl "\n"
#define _ <<" "<<
#define eb(x) emplace_back(x)
#define maxelem(v) *max_element(v.begin(),v.end())
#define minelem(v) *min_element(v.begin(),v.end())
#define FOR(a,b) for(int i=int(a);i<int(b);++i)

using namespace std;

const int mod = 1e9+7;

void izlaz(ll br)
{
  cout<<br;
  exit(0);
}

ll lcm(ll a,ll b)
{
     return a*b/__gcd(a,b);
}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL),cout.tie(NULL);

  int n,i;
  ll ans=1;
  cin>>n;
  vector<int> a(n);
  for(i=0;i<n;i++)
  {
    cin>>a[i];
    ans=lcm(ans,a[i]);
  }
  printf("%lli",ans);
  cin.ignore();
  cin.get();
 return 0;

}
