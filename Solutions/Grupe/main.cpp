#include <bits/stdc++.h>
#define rep(a,n) for(int i = int(a); i<int(n); i++)
#define repd(a,n) for(int i = int(n); i>=int(a); i--)
#define ll long long
#define elif else if
#define pb push_back

// drz se mala drz se
using namespace std;

int main()
{
    ll n,k,i,minr;
    cin>>n>>k;
    ll a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n,greater<int>());
    minr=a[0]-a[n-k-1];

    if(k==1)
    {
        cout<<0;
        return 0;
    }
    if(n==k)
    {
        cout<<a[0]-a[n-1];
        return 0;
    }

    if(n%k==0)
        {
            for(i=0;i<n;i+=k)
                if(a[i]-a[i+k-1]>minr)
                    minr=a[i]-a[i+k-1];
            cout<<minr;
        }
    else
        {
          for(i=0;i<n-k;i+=k)
            if(a[i]-a[i+k-1]>minr)
                        minr=a[i]-a[i+k-1];

            cout<<min(minr,a[0]-a[n-k-1]);
        }


    return 0;
}
