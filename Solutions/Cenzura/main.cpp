#include <bits/stdc++.h>
#define ll long long
#define elif else if
#define endl "\n"
#define eb(x) emplace_back(x)
using namespace std;

const int mod = 1e9+7;

int izlaz(int br)
{
  cout<<br;
  return 0;

}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  unsigned int n,i,j;
  cin>>n;
  string s,k[n],ans="",z="";
  for(i=0;i<n;++i)
    cin>>k[i];
  cin>>s;

  for(i=0;i<s.size();++i)
  {
    //for(j=0;j<s.size();++j)
   // {
    //    if(s.substr(j,k[i].size()-1)==k[i])
   //         cout<<k[i];
  //  }
  cout<<s.substr(i,7);
  }



 return 0;
}
