#include <bits/stdc++.h>
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

void izlaz(string br)
{
  cout<<br;
  exit(0);
}

ll binexp(ll a,ll b) {
    ll res = 1;
    while(b>0)
    {
        if (b&1)
            res*=a;
        a*=a;
        b>>=1;
    }
    return res;
}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL),cout.tie(NULL);


  int n,k,i,j,ans=0,csum=0;
  cin>>n>>k;
  vector<int> a(n),pws(n);
  for(i=0;i<n;++i)
  {
    cin>>a[i];
    if(a[i]==0)
        pws[i]=0;
    else
        pws[i]=binexp(2,n-i-1);
    csum+=pws[i];
  }

  if(csum<=k)
  {
      cout<<n;
      return 0;
  }
  csum=0;
  for(i=0;i<n;++i)
  {
    for(j=i+1;j<n;++j)
    {
    // cout<<i<<" "<<j<<" "<<endl;
     csum+=pws[i];
     if(csum>k)
        break;
     if(csum<=k)
         ans=max(ans,j-i+1);
    }
    csum=0;
  }
  cout<<ans;

 return 0;

}
