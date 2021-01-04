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

  int t,n,x;
  cin>>t;
  while(t--)
  {
      cin>>n;
      if(n==1)
      {
          cin>>x;
          cout<<1<<endl;
      }
      else
      {
          vector<int> a(n),uniq;
          unordered_map<int,int> mapa;
          FOR(0,n)
          {
              cin>>a[i];
              if(mapa.find(a[i])==mapa.end())
                mapa.insert(pair<int,int>(a[i],1));
              else
                mapa[a[i]]++;
          }
          bool flag=0;
          for(auto x  : mapa)
          {
              if(x.second==1)
                {
                    uniq.eb(x.first);
                    flag=1;
                }
          }
          if(!flag)
          {
              cout<<-1<<endl;
              continue;
          }
          int minx = minelem(uniq);
          FOR(0,n)
          {
              if(a[i]==minx)
              {
                  cout<<i+1<<endl;
                  break;
              }
          }
      }


  }

 return 0;

}
