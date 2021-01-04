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

  int n,m,i,j,br=0;
  bool f=0;
  cin>>n>>m;
  vector<vector<int>> mat(n,vector<int>(m));

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        cin>>mat[i][j];

  for(i=0;i<n;i++)
      br=max(br,minelem(mat[i]));

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      if(mat[i][j]==br)
      {
        if(f)
            cout<<"u "<<i+1<<" redu i "<<j+1<<" koloni,"<<endl;
        else
            {
              cout<<"Trazeni broj je "<<br<<" nalazi se u "<<i+1<<" redu i "<<j+1<<" koloni,"<<endl;
              f=1;
            }
      }

    }
  }


  cin.ignore();
  cin.get();

 return 0;

}
