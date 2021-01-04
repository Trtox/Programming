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

  int n,i,j,p0,input,ans=0;
  cin>>n;
  vector<int> a,b;
  for(i=0;i<n;++i)
    {
        cin>>input;
        if(input==0)
            p0=i;
        else
           {
               a.eb(input);
               b.eb(input);
           }
    }
    sort(b.begin(),b.end());

    if(a==b)
    {
        for(i=0;i<n-1;++i)
        {
            if(i==p0)
            {
                cout<<0<<" ";
                cout<<a[i]<<" ";
            }
            else
                cout<<a[i]<<" ";
            if(p0==n-1 && i==n-2)
                cout<<0<<" ";
        }
        cout<<endl<<0;
        return 0;
    }
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
           if(a[i]<a[j])
            {
                swap(a[i],a[j]);
            }
       }
       if(i==n-1)
        break;
      else
      {
       for(int k=0;k<n-1;++k)
       {
           if(k==p0)
            {
                cout<<0<<" ";
                cout<<a[k]<<" ";
            }
            else
                cout<<a[k]<<" ";

        }
        ++ans;
      }
        cout<<endl;
   }

   cout<<ans;
 return 0;
}
