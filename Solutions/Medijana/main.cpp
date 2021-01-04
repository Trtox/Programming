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

void medijana(int a[],int n,int t[],int x[],int y[],int q)
{

    vector<double> ans;
    int i,j,p1,p2,a1[n];
    for(i=0;i<q;++i)
    {
        copy(a,a+n,a1);
        if(t[i]==1)
            a[x[i]]=y[i];
        else
        {
          sort(a1+x[i],a1+y[i]+1);
           if((y[i]+x[i])%2!=0)
                ans.emplace_back(double(double(a1[(x[i]+y[i])/2]+a1[(x[i]+y[i])/2+1])/2));
           else
                ans.emplace_back(double(a1[(x[i]+y[i])/2]));
        }

    }
   for(auto i : ans)
        cout<<i<<" ";
  //  for(i=0;i<n;i++)
    // cout<<a[i]<<" ";

}

int main()
{
  ios_base :: sync_with_stdio(false);
  cin.tie(NULL);

  int a[]={6,2,7,3,5};
  int n=5;
  int t[]={2,1,2};
  int x[]={0,3,0};
  int y[]={3,8,4};
  int q=3;
  medijana(a,n,t,x,y,q);



 return 0;
}
