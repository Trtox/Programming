#include <bits/stdc++.h>
//#define rep(a,n) for(int i = int(a); i<int(n); i++)
//#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define ll long long
#define elif else if

using namespace std;
ll leave()
{
    cout<<"-1";
    return 0;
}
ll leave2(string s)
{
    cout<<s;
    return 0;
}
int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  string s,ans="";
  ll bo=0,bz=0,i,j,k;
  set<string> comp;
  getline(cin,s);
ll  n=s.size();
  ll pb=0;
  vector<ll> lb;
  vector<ll> rb;
  for(i=0;i<n;i++)
  {
      if(s[i]=='{')
        {
            bo++;
            lb.push_back(i);
        }
      elif(s[i]=='}')
        {
            bz++;
            rb.push_back(i);
            pb++;
        }
  }
  if(bo!=bz)
    leave();

  if(bo==0 && bz==0)
    leave2(s);

  for(i=0;i<pb;i++)
  {
      for(ll k = lb[i];k<=rb[i];k++)
      {
         // comp.insert((!='|') ? s.substr(i,s.find("|")-1) : )
         if(s[k]!='|')
         {
             comp.insert(s.substr(k,s.find("|")-1));
         }
      }
      auto nesto = comp.begin();
      ans+=*nesto;
      ans+=" ";
      comp.clear();
  }
  cout<<ans;


 return 0;
}
