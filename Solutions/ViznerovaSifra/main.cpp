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

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL),cout.tie(NULL);

  string k,t;
  unordered_map<char,int> mapa;
  unordered_map<int,char> rmapa;
  getline(cin,k);
  getline(cin,t);
  int i,c,m=t.size();
  for(i=0,c='A'; i<26,c<='Z' ;++i,++c)
    {
        mapa.insert(pair<char,int>(c,i));
        rmapa.insert(pair<int,char>(i,c));
    }
  string ans="";

  if(k.size()<t.size())
  {
    int p=-1,oldSize=k.size();
    while(k.size()<t.size())
    {
        k+=k[++p];
        p>=oldSize ? p=0 : p=p;
    }
  }

  for(i=0;i<m;++i)
      ans+=rmapa[(mapa[k[i]]+mapa[t[i]])%26];

  printf("%s",ans.c_str());

  cin.get();
 return 0;

}
