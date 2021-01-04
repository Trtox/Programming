#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define i64 long long
#define elif else if
//ide bik mala
using namespace std;

bool reverseJednak( string s )
{
    string o = s;
    reverse(o.begin(), o.end());

    if( o == s )
        return true;
    else
        return false;
}


int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  string s,subs;
  int k;
  cin>>s>>k;

  if(reverseJednak(s))
    {
        cout<<k;
        return 0;
    }


  int answer = 0;

  for(int i=0;i<s.size();i++)
  {
      subs = s.substr(i,s.size()-i);
      set<char> sett;
      for(char c : subs)
        sett.insert(c);

      int x = sett.size();

      if(x <= k)
        if(subs.size()>answer)
            answer=subs.size();

  }
    cout<<answer;

 return 0;
}
