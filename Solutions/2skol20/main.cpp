#include <bits/stdc++.h>
#define ll long long
#define elif else if
#define endl "\n"
#define pb(x) push_back(x)
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

  int n;
  cin>>n;
  int a[n+1],b[n+1],i,j,br1=0,br2=0,ans1=0,ans2=0;

  for(i=1;i<=n;++i)
  {
    cin>>a[i]>>b[i];
    if(max(a[i],b[i])>br1)
    {
        br1=max(a[i],b[i]);
        ans1=a[i]>b[i] ? i*2-1 : i*2;
        if(min(a[i],b[i])>br2)
        {
            br2=min(a[i],b[i]);
            ans2=a[i]<b[i] ? i*2-1 : i*2;
        }
    }
  }
  if(ans1==ans2)
        --ans1;
  cout<<"S"<<ans1<<endl;
  cout<<"S"<<ans2<<endl;
 return 0;
}
