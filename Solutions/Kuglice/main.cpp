#include <bits/stdc++.h>
#define ll long long
#define elif else if

using namespace std;

const ll mod = 1e9+7;

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  ll n,i,ans=0,b;
  cin>>n;
  string s;
  cin>>s;


 for(i=0;i<2*n;i++)
  {

     if(s[i]=='C')
     {
         b=s.find("B");
        ans+=b-i;
        s[i]='a';
        s[b]='a';

     }
     elif(s[i]=='B')
     {
        b=s.find("C");
        ans+=b-i;
        s[i]='a';
        s[b]='a';
     }
  }
  cout<<ans;
 return 0;
}
