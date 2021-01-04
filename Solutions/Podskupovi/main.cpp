#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define ll long long
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

  long long n,a,b,i,curr_sum=0,j,num=0,k;
  cin>>n>>a>>b;
  long long arr[n+1];
  for(i=0;i<n;i++)
  {
      cin>>arr[i];
     // if(arr[i]>=a && arr[i]<=b)
        //\num++;

  }

  for(i=0;i<n;i++)
  {

      for(j=i;j<n;j++)
      {
          curr_sum+=arr[j];
            if(curr_sum>=a && curr_sum<=b)
               num++;

       // cout<<" "<<j<<endl;
   // cout<<curr_sum<<endl;

      }

    curr_sum=0;
  }
  if(a<=0 && b>=0)
    {
        num++;
    }

    cout<<num;
 return 0;
}
