#include <bits/stdc++.h>
using namespace std;


int main()
{
  int n,i,j,br=0,r=0;
  string s;
  cin>>n;
  cin>>s;

  sort(s.begin(),s.end());

  for(i=0;i<n;i++)
  {
      if(s[i]==s[i-1])
        br++;
      else if(s[i]!=s[i-1])
        r++;
  }

  if(br==n)
    cout<<"-1";

  else
    cout<<n-r;

  /*
  Verzija 2020
  int n,i;
  char c;
  unordered_set<char> sett;
  cin>>n;
  FOR(0,n)
  {
     cin>>c;
     sett.insert(c);
  }
  if(n>26)
  {
       cout<<-1;
       return 0;
  }
  cout<<n-sett.size();
  */
















    cin.ignore();
    cin.get();
    return 0;
}
