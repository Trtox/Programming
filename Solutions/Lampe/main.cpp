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

void izlaz(ll br)
{
  cout<<br;
  exit(0);
}


int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL),cout.tie(NULL);

  // verzija za 10 bodova
  int n,m,k,cnt=0,i,j;
  cin>>n>>m>>k;
  vector<vector<int>> a(n,vector<int>(m));
  if(n==1 || m==1)
  {
      if(m==1)
      {
          vector<int> v(n);
         for(i=0;i<n;i++)
            cin>>v[i];

         if(k%2==0)
            izlaz(count(v.begin(),v.end(),0));
         else(k%2==1)
            izlaz(n-count(v.begin(),v.end(),0));

      }
      else
      {
          vector<int> v(m);
          for(i=0;i<m;i++)
            cin>>v[i];
         if(k%2==0)
            izlaz(count(v.begin(),v.end(),1))
         else
            izlaz(count(v.begin(),v.end(),0));
      }
  }


 // cin.ignore();
//  cin.get();

 return 0;

}
