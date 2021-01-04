#include <bits/stdc++.h>
#define ll long long
#define elif else if
#define endl "\n"
#define _ <<" "<<
#define eb(x) emplace_back(x)
#define maxelem(v) *max_element(v.begin(),v.end())
#define minelem(v) *min_element(v.begin(),v.end())
#define FOR(a,b) for(int i=int(a);i<int(b);++i)
#define cend cout<<endl
using namespace std;

const int mod = 1e9+7;


void izlaz(ll br)
{
  cout<<br;
  return;
}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL),cout.tie(NULL);

  int n,i,j,k,br,p,ans=0,rb,lb,brl,brd;
  cin>>n;
  vector<int> a(n),od,rbs;
  FOR(0,n)
    cin>>a[i];

  for(i=0;i<n;i++)
  {
      ans=1,rb=-1,lb=-1,brl=0,brd=0;
      for(j=i-1;j>=0;j--)
      {
        if(a[i]>a[j])
        {
            ans++,brl++;
            lb=j;`
        }
        else
            break;

      }

      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
            ans++,brd++;
            rb=j;
        }
        else
            break;
      }
      ans+=brd*brl;
      od.eb(ans);
  }
  for(i=0;i<n;i++)
    cout<<od[i]<<" ";

 return 0;

}
